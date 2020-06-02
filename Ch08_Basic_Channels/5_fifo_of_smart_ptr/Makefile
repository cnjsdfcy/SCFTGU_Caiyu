SYSTEMC=/usr/local/systemc-2.3.0
SYSTEMC_LIB=$(firstword $(wildcard $(SYSTEMC)/lib*))

all: fifo_of_smart_ptr

fifo_of_smart_ptr:
	g++ -O0 -g -ggdb -Wno-deprecated \
		-DDEBUG_SYSTEMC \
		-I./ -I$(SYSTEMC)/include \
		snk.cpp src.cpp main.cpp \
		-o fifo_of_smart_ptr.x \
		-L$(SYSTEMC_LIB) -lsystemc
	LD_LIBRARY_PATH=$(SYSTEMC_LIB):$(LD_LIBRARY_PATH) ./fifo_of_smart_ptr.x

clean:
	rm -fr *.o *.x *.vvp

