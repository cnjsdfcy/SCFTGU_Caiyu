//BEGIN FuelMix.cpp
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//See FuelMix.h for more information
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <systemc>
using namespace sc_core;
#include "FuelMix.h"
using std::cout;
using std::endl;

// Constructor
FuelMix::FuelMix(sc_module_name nm)
: sc_module(nm)
{
  cout << "INFO: Constructing instance " << name() << endl;
  SC_THREAD(FuelMix_thread);
}//end FuelMix constructor

void FuelMix::FuelMix_thread(void) {
  cout << "INFO: Ran FuelMix_thread inside instance " << name() << endl;
}//end FuelMix_thread()

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//END $Id: FuelMix.cpp,v 1.3 2004/02/02 12:32:26 dcblack Exp $
