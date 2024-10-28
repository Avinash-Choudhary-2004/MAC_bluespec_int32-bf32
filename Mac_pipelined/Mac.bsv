package Mac;
    import FIFO::*;
    import SpecialFIFOs::*;
    
    typedef struct {
        Bit#(16) val1;
        Bit#(16) val2;
        Bit#(32) val3;
        Bit#(1) s;
    } MultiplierInput
    deriving(Bits, Eq);
    
    typedef struct {
        Bit#(32) val1;
        Bit#(32) val2;
        Bit#(1) s;
    } AdderInput
    deriving(Bits, Eq);
    
    typedef struct {
        Bit#(32) val1;
    } AdderOutput
    deriving(Bits, Eq);

    interface Mac_ifc;
        method Action read_in(MultiplierInput mul_in); // Read the inputs
		method ActionValue#(AdderOutput) mac_calc (); // mac operator
    endinterface: Mac_ifc


    // Version 1 of the counter

    (* synthesize *)

    module mkMac (Mac_ifc);
    
        FIFO#(MultiplierInput)     multiplier_ififo <- mkPipelineFIFO();
        FIFO#(AdderInput)     adder_ififo <- mkPipelineFIFO();
        FIFO#(AdderOutput)     adder_ofifo <- mkPipelineFIFO();
/*
        Reg#(Bit#(16)) a <- mkReg(0);  
		Reg#(Bit#(16)) b <- mkReg(0);
		Reg#(Bit#(32)) c <- mkReg(0);
		Reg#(Bit#(1)) s <- mkReg(0);
		Reg#(Bit#(32)) out <- mkReg(0); 
*/
        //16bit bitwise multiplier
        function Bit#(32) bit_16Multiplier(Bit#(16) a, Bit#(16) b);
		    Bit#(32) product=0;
		    Bool negate=a[15]!=b[15];
		    //if any of numbers is negative, multiply positive values of both and give sign
		    if(a[15]==1) begin
		        a=~a+1;
		    end
		    if(b[15]==1) begin
		        b=~b+1;
		    end
		    Bit#(32) in_1=zeroExtend(a[14:0]);
		    Bit#(32) in_2=zeroExtend(b[14:0]);
		    for (Integer i=0; i<16; i=i+1) begin
		        if(in_2[0]==1) begin
		            product=product+in_1;
		        end
		        in_1=in_1<<1;
		        in_2=in_2>>1;
		    end
		    if(negate) begin
		        product=~product;
		        product=product+1;
		    end
		    return product;
		endfunction
		
		//8bit bitwise multiplier
		function Bit#(16) bit_8Multiplier(Bit#(8) a, Bit#(8) b);
		    Bit#(16) product=0;
		    
		    Bit#(16) in_1=zeroExtend(a);
		    Bit#(16) in_2=zeroExtend(b);
		    for (Integer i=0; i<8; i=i+1) begin
		        if(in_2[0]==1) begin
		            product=product+in_1;
		        end
		        in_1=in_1<<1;
		        in_2=in_2>>1;
		    end
		    return product;
		endfunction
        
        //32bit bitwise adder
        function Bit#(32) bitAdder(Bit#(32) a, Bit#(32) b);
		    Bit#(32) sum=0;
		    Bit#(1) carry_in=0;
		    for(Integer i=0; i<32; i=i+1) begin
		        Bit#(1) bit_sum=a[i]^b[i]^carry_in;
		        Bit#(1) carry_out=(a[i]&b[i])|(carry_in & (a[i]^b[i])); 
		        carry_in=carry_out;
		        sum[i]=bit_sum;
		    end
		    return sum;
		endfunction
        
        function Bit#(32) mac_flt_mul(Bit#(16) a, Bit#(16) b);
            Bit#(16) result_mant=bit_8Multiplier({1'b1,a[6:0]},{1'b1,b[6:0]});
            Int#(8) oneTwoSeven=(-127);
            Bit#(8) bit_127=pack(oneTwoSeven);
            Bit#(8) result_exp=a[14:7]+b[14:7]+bit_127;
            Bit#(8) rounded_result_mant='0;
            if(result_mant[15]==1) begin
                result_mant={result_mant[14:0],1'b0};
                result_exp=result_exp+1;
            end
            else begin
                result_mant={result_mant[13:0],2'b00};
            end              
            //round to nearest
            Bit#(1) guard=result_mant[9];
            Bit#(1) round_bit=result_mant[8];
            Bit#(1) sticky=((8'b0|result_mant[7:0])!=8'b0)? 1:0;
            if((round_bit==1)&&((guard==1)||(sticky==1))) begin
                rounded_result_mant=zeroExtend(result_mant[15:9]);
                rounded_result_mant=rounded_result_mant+1;
                result_mant='0;
                if(rounded_result_mant[7]==1) begin
                    result_exp=result_exp+1;
                end
                result_mant[15:9]=rounded_result_mant[6:0];
            end
            else begin
                rounded_result_mant=zeroExtend(result_mant[15:9]);
                result_mant='0;
                result_mant[15:9]=rounded_result_mant[6:0];
            end            

            Bit#(24) result_mant_aligned={1'b0,result_mant,7'b0};
            //finally assign each of sign, exponent, mantissa to result
            Bit#(32) result={a[15]^b[15],result_exp,result_mant_aligned[22:0]}; 
            return result;
        endfunction
        
        function Bit#(32) mac_flt_add(Bit#(32) product, Bit#(32) c);
            Bit#(8) result_exp= product[30:23];
            Bit#(24) result_mant_aligned={1'b1,product[22:0]};
            Bit#(8) delta_exp;
            Bit#(24) c_mant_aligned={1'b1,c[22:0]};
            Bit#(1) round_flag='0;
            
            //aligning mantissa
            if(result_exp>c[30:23]) begin
                delta_exp=result_exp-c[30:23];
                round_flag=c_mant_aligned[delta_exp-1];
                c_mant_aligned=c_mant_aligned>>delta_exp;
            end
            else begin
                delta_exp=c[30:23]-result_exp;
                round_flag=result_mant_aligned[delta_exp-1];
                result_mant_aligned=zeroExtend(result_mant_aligned>>delta_exp);
                result_exp=c[30:23];
            end
            
            
            //to add using the bitwiise addition function, sign extend the addends
            Bit#(32) result_mant_extend=zeroExtend(result_mant_aligned);
            Bit#(32) c_mant_extend=zeroExtend(c_mant_aligned);
            let x=bitAdder(result_mant_extend,c_mant_extend);
            //result_mant_aligned=x[23:0];  //match the bit size
            if(x[24]==1) begin
                result_mant_aligned=x[24:1];
                round_flag=x[0];
                result_exp=result_exp+1;
            end
            else begin
                result_mant_aligned=x[23:0];
            end
            if(round_flag==1) begin
                result_mant_aligned=result_mant_aligned+1;
            end            
            //finally assign each of sign, exponent, mantissa to result
            Bit#(32) result={product[31],result_exp,result_mant_aligned[22:0]}; 
            return result;
        endfunction
        
        //-----------------------------------
        
        rule rl_pipeline_mulStage;
            MultiplierInput inp1=multiplier_ififo.first();
            Bit#(16) a=inp1.val1;
            Bit#(16) b=inp1.val2;
            Bit#(32) product='0;
            if(inp1.s==1) begin
                product=mac_flt_mul(a,b);
            end
            else begin
                product=bit_16Multiplier(a,b);
            end
            AdderInput inp2;
            inp2.val1=product;
            inp2.val2=inp1.val3;
            inp2.s=inp1.s;
            
            multiplier_ififo.deq();
            adder_ififo.enq(inp2);
        endrule
        
        rule rl_pipeline_addStage;
            AdderInput inp1=adder_ififo.first();
            Bit#(32) sum='0;
            if(inp1.s==1) begin
                sum=mac_flt_add(inp1.val1,inp1.val2);
            end
            else begin
                sum=bitAdder(inp1.val1,inp1.val2);
                //sum=inp1.val2;
            end
            AdderOutput inp2;
            inp2.val1=sum;
            
            adder_ififo.deq();
            adder_ofifo.enq(inp2);
        endrule
        
        
        
        
        //-----------------------------------
        
        method Action read_in(MultiplierInput mul_in);
            multiplier_ififo.enq(mul_in);
        endmethod
        
        
        method ActionValue#(AdderOutput) mac_calc ();
            AdderOutput result=adder_ofifo.first();
            adder_ofifo.deq();
            return result;
        endmethod
    endmodule: mkMac

endpackage
