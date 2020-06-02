SYSTEMC=/usr/local/systemc-2.3.0
SYSTEMC_LIB=$(firstword $(wildcard $(SYSTEMC)/lib*))

.PHONY: all clean Hello_C Hello_Cpp Hello_SystemC Hello_Verilog

all: Hello_C Hello_Cpp Hello_SystemC Hello_Verilog

clean:
	rm -fr *.o *.x *.vvp

Hello_C:
	@echo "\n###Compiling Hello World in vanilla C"
	gcc  -O0 -g -ggdb -o Hello_C.x Hello_C.c
	./Hello_C.x

Hello_Cpp:
	@echo "\n###Compiling Hello World in simple C++"
	g++  -O0 -g -ggdb -o Hello_Cpp.x Hello_Cpp.cpp
	./Hello_Cpp.x

Hello_SystemC:
	@echo "\n###Compiling Hello World in SystemC"
	g++ -O0 -g -ggdb -Wno-deprecated \
		-DDEBUG_SYSTEMC \
		-I./ -I$(SYSTEMC)/include \
		Hello_SystemC.cpp main.cpp \
		-o Hello_SystemC.x \
		-L$(SYSTEMC_LIB) -lsystemc
	LD_LIBRARY_PATH=$(SYSTEMC_LIB):$(LD_LIBRARY_PATH) ./Hello_SystemC.x

Hello_Verilog:
	@echo "\n###Compiling Hello World in Verilog"
	@echo "Assuming icarus verilog"
	iverilog -o Hello_Verilog.vvp Hello_Verilog.v
	vvp Hello_Verilog.vvp
