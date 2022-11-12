module lfsr (
    input logic clk,
    input logic rst,
    input logic en,
    output logic [3:0] data_out
);
    logic [4:1] sreg = 4'b1;

    always_ff @(posedge clk) begin
        if (rst) 
            sreg <= 4'b1;
        else if (en) begin
            sreg <= {sreg[3:1], sreg[3] ^ sreg[4]};

        end
    end
    assign data_out = (sreg[4:1]);
endmodule

