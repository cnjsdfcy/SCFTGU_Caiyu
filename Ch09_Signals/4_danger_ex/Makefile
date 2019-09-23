SYSTEMC=/usr/local/systemc-2.3.0
SYSTEMC_LIB=$(firstword $(wildcard $(SYSTEMC)/lib*))

all: danger

danger:
	g++ -O0 -g -ggdb -Wno-deprecated \
		-DDEBUG_SYSTEMC \
		-I./ -I$(SYSTEMC)/include \
		danger_ex.cpp main.cpp \
		-o danger.x \
		-L$(SYSTEMC_LIB) -lsystemc
	LD_LIBRARY_PATH=$(SYSTEMC_LIB):$(LD_LIBRARY_PATH) ./danger.x

clean:
	rm -fr *.o *.x *.vvp

