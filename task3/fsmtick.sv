module fsmtick (
    input logic clk,
    input logic rst,
    input logic en,
    output logic [7:0] out
);

    logic [15:0] N = 16'd28;

clktick ticker (
    .clk(clk),
    .rst(rst),
    .en(en),
    .N(N),
    .tick(tick)
);

f1fsm machine (
    .clk(clk),
    .rst(rst),
    .en(tick),
    .out(out)
);

endmodule