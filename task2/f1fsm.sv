module f1fsm (
    input logic clk,
    input logic rst,
    input logic en,
    output logic [7:0] out
);
    typedef enum {s0, s1, s2, s3, s4, s5, s6, s7, s8} mystate;
    mystate current, next_state; 

    //next state logic
    always_comb begin
        case (current)
            s0: next_state = s1;
            s1: next_state = s2;
            s2: next_state = s3;
            s3: next_state = s4;
            s4: next_state = s5;
            s5: next_state = s6;
            s6: next_state = s7;
            s7: next_state = s8;
            s8: next_state = s0;
        endcase
    end


    //output logic
    always_comb begin
        case (current)
            s0: out = 8'b0;
            s1: out = 8'b1;
            s2: out = 8'b11;
            s3: out = 8'b111;
            s4: out = 8'b1111;
            s5: out = 8'b11111;
            s6: out = 8'b111111;
            s7: out = 8'b1111111;
            s8: out = 8'b11111111;
        endcase
    end

    //state transition
    always_ff @(posedge clk) begin
        if (rst) 
            current <= s0;
        else if (en)
            current <= next_state;
    end
endmodule
