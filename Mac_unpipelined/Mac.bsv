package Mac;

    interface Mac_ifc;
        method Action read_A(Bit#(16) a_in); // Read the input A
		method Action read_B(Bit#(16) b_in); // Read the input B
		method Action read_C(Bit#(32) c_in); // Read the input C
		method Action read_S(Bit#(1) s_in); // Read the input Select
		method ActionValue#(Bit#(32)) mac_calc (); // mac operator
    endinterface: Mac_ifc


    // Version 1 of the counter

    (* synthesize *)

    module mkMac (Mac_ifc);

        Reg#(Bit#(16)) a <- mkReg(0);  
		Reg#(Bit#(16)) b <- mkReg(0);
		Reg#(Bit#(32)) c <- mkReg(0);
		Reg#(Bit#(1)) s <- mkReg(0);
		Reg#(Bit#(32)) out <- mkReg(0); 
        
        //16bit bitwise multiplier
        function Bit#(32) bit_16Multiplier(Bit#(16) a, Bit#(16) b);
		    Bit#(32) product=0;
		    Bool negate=a[15]!=b[15];
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
		/*
		function Bit#(16) round_to_nearest(Bit#(16) result_mant);
		    Bit#(1) guard=result_mant[8];
            Bit#(1) round_bit=result_mant[7];
            Bit#(1) sticky=((7'b0|result_mant[6:0])!=7'b0)? 1:0;
            Bit#(8) rounded_result_mant='0;
            if(guard==1&&((round_bit==1)||(sticky==1))) begin
                rounded_result_mant=zeroExtend(result_mant[15:9]+1);
                result_mant='0;
                result_mant[15:9]=rounded_result_mant[6:0];
            end
            else begin
                rounded_result_mant=zeroExtend(result_mant[15:9]);
                result_mant='0;
                result_mant[15:9]=rounded_result_mant[6:0];
            end
            return result_mant;
		endfunction
        */
        function Bit#(32) mac_flt(Bit#(16) a, Bit#(16) b, Bit#(32) c);
            Bit#(16) result_mant=bit_8Multiplier({1'b1,a[6:0]},{1'b1,b[6:0]});
            Int#(8) oneTwoSeven=(-127);
            Bit#(8) bit_127=pack(oneTwoSeven);
            Bit#(8) result_exp=a[14:7]+b[14:7]+bit_127;
            Bit#(8) delta_exp;
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
            /*
            if(rounded_result[7]==1) begin
                result_exp=result_exp+1;
            end
            else begin
                result_mant={result_mant[13:0],2'b00};
            end
            */
            //result_mant=round_to_nearest(result_mant);
            Bit#(24) result_mant_aligned={1'b1,result_mant,7'b0};
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
            Bit#(32) result={a[15]^b[15],result_exp,result_mant_aligned[22:0]}; 
            return result;
        endfunction
        
        function Bit#(32) mac_int(Bit#(16) a, Bit#(16) b, Bit#(32) c);
            Bit#(32) product=bit_16Multiplier(a,b);
            return bitAdder(product,c);
        endfunction
        
        method Action read_A(Bit#(16) a_in);
            a<=a_in;
        endmethod
        
        method Action read_B(Bit#(16) b_in);
            b<=b_in;
        endmethod
        
        method Action read_C(Bit#(32) c_in);
            c<=c_in;
        endmethod
        
        method Action read_S(Bit#(1) s_in);
            s<=s_in;
        endmethod
        
        method ActionValue#(Bit#(32)) mac_calc ();
            if(s==1) begin
                out<=mac_flt(a,b,c);
                //$display("----this is mac_flt-----");
            end
            else begin
                out<=mac_int(a,b,c);
                //$display("----this is mac_int-----");
            end
            return out;
        endmethod
    endmodule: mkMac

endpackage
