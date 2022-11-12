#cleanup
rm -rf obj_dir
rm -f fsmtick.vcd

verilator -Wall --cc --trace fsmtick.sv --exe fsmtick_tb.cpp
make -j -C obj_dir/ -f Vfsmtick.mk Vfsmtick

obj_dir/Vfsmtick

#run by typing:
# source ./doit.sh

