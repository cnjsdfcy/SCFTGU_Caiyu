SYSTEMC=/usr/local/systemc-2.3.0
SYSTEMC_LIB=$(firstword $(wildcard $(SYSTEMC)/lib*))

all: sedan

sedan:
	g++ -O0 -g -ggdb -Wno-deprecated \
		-DDEBUG_SYSTEMC \
		-I./ -I$(SYSTEMC)/include \
		FuelMix.cpp Exhaust.cpp Cylinder.cpp Engine.cpp \
		Wheel.cpp Body.cpp sedan.cpp \
		main.cpp \
		-o sedan.x \
		-L$(SYSTEMC_LIB) -lsystemc
	LD_LIBRARY_PATH=$(SYSTEMC_LIB):$(LD_LIBRARY_PATH) ./sedan.x

clean:
	rm -fr *.o *.x *.vvp

