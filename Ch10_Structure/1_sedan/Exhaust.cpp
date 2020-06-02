//BEGIN Exhaust.cpp
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//See sedan.h for more information
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <systemc>
using namespace sc_core;
using std::cout;
using std::endl;
#include "Exhaust.h"

SC_HAS_PROCESS(Exhaust);
// Constructor
Exhaust::Exhaust(sc_module_name nm)
: sc_module(nm)
{
  cout << "INFO: Constructing instance " << name() << endl;
  SC_THREAD(Exhaust_thread);
}//end Exhaust()

void Exhaust::Exhaust_thread(void) {
  cout << "INFO: Ran Exhaust_thread inside instance " << name() << endl;
}//end Exhaust_thread()

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//END $Id: Exhaust.cpp,v 1.2 2004/01/12 05:35:25 dcblack Exp $
