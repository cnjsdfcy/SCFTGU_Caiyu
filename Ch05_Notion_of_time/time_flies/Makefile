SYSTEMC=/usr/local/systemc-2.3.0
SYSTEMC_LIB=$(firstword $(wildcard $(SYSTEMC)/lib*))

all: time_flies

time_flies:
	g++ -O0 -g -ggdb -Wno-deprecated \
		-DDEBUG_SYSTEMC \
		-I./ -I$(SYSTEMC)/include \
		time_flies.cpp main.cpp \
		-o time_flies.x \
		-L$(SYSTEMC_LIB) -lsystemc
	LD_LIBRARY_PATH=$(SYSTEMC_LIB):$(LD_LIBRARY_PATH) ./time_flies.x

clean:
	rm -fr *.o *.x *.vvp

