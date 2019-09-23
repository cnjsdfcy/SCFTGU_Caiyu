//BEGIN Engine.cpp
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//See convertible.h for more information
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <systemc>
using namespace sc_core;
using std::cout;
using std::endl;

#include "Engine.h"
#include "FuelMix.h"
#include "Exhaust.h"
#include "Cylinder.h"

// Constructor
Engine::Engine(sc_module_name nm)
: sc_module(nm)
{
  cout << "INFO: Constructing instance " << name() << endl;
  // Processes
  SC_THREAD(Engine_thread);
  // Instantiations
  fuelmix_i = new FuelMix("fuelmix_i");
  exhaust_i = new Exhaust("exhaust_i");
  cyl_i1 = new Cylinder("cyl_i1");
  cyl_i2 = new Cylinder("cyl_i2");
}//end Engine constructor

void Engine::Engine_thread(void) {
  cout << "INFO: Ran Engine_thread inside instance " << name() << endl;
}//end Engine_thread()

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//END $Id: Engine.cpp,v 1.3 2004/02/02 12:32:26 dcblack Exp $
