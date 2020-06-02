SYSTEMC=/usr/local/systemc-2.3.0
SYSTEMC_LIB=$(firstword $(wildcard $(SYSTEMC)/lib*))

all: convertible 

convertible:
	g++ -O0 -g -ggdb -Wno-deprecated \
		-DDEBUG_SYSTEMC \
		-I./ -I$(SYSTEMC)/include \
		FuelMix.cpp Exhaust.cpp Cylinder.cpp Engine.cpp \
		Wheel.cpp Body.cpp convertible.cpp \
		main.cpp \
		-o convertible.x \
		-L$(SYSTEMC_LIB) -lsystemc
	LD_LIBRARY_PATH=$(SYSTEMC_LIB):$(LD_LIBRARY_PATH) ./convertible.x

clean:
	rm -fr *.o *.x *.vvp

