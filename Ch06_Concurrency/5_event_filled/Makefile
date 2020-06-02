SYSTEMC=/usr/local/systemc-2.3.0
SYSTEMC_LIB=$(firstword $(wildcard $(SYSTEMC)/lib*))

all: event_filled

event_filled:
	g++ -O0 -g -ggdb -Wno-deprecated \
		-DDEBUG_SYSTEMC \
		-I./ -I$(SYSTEMC)/include \
		event_filled.cpp main.cpp \
		-o event_filled.x \
		-L$(SYSTEMC_LIB) -lsystemc
	LD_LIBRARY_PATH=$(SYSTEMC_LIB):$(LD_LIBRARY_PATH) ./event_filled.x

clean:
	rm -fr *.o *.x *.vvp

