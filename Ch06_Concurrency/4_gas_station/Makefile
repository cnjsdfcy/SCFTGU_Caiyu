SYSTEMC=/usr/local/systemc-2.3.0
SYSTEMC_LIB=$(firstword $(wildcard $(SYSTEMC)/lib*))

all: gas_station

gas_station:
	g++ -O0 -g -ggdb -Wno-deprecated \
		-DDEBUG_SYSTEMC \
		-I./ -I$(SYSTEMC)/include \
		gas_station.cpp main.cpp \
		-o gas_station.x \
		-L$(SYSTEMC_LIB) -lsystemc
	LD_LIBRARY_PATH=$(SYSTEMC_LIB):$(LD_LIBRARY_PATH) ./gas_station.x

clean:
	rm -fr *.o *.x *.vvp

