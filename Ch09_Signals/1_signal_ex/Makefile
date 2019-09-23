SYSTEMC=/usr/local/systemc-2.3.0
SYSTEMC_LIB=$(firstword $(wildcard $(SYSTEMC)/lib*))

all: signal

#note: do NOT add -DDEBUG_SYSTEMC otherwise compiling errors occur
signal:
	g++ -O0 -g -ggdb -Wno-deprecated \
		-I./ -I$(SYSTEMC)/include \
		signal_ex.cpp main.cpp \
		-o signal.x \
		-L$(SYSTEMC_LIB) -lsystemc
	LD_LIBRARY_PATH=$(SYSTEMC_LIB):$(LD_LIBRARY_PATH) ./signal.x

clean:
	rm -fr *.o *.x *.vvp

