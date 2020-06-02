//BEGIN main.cpp
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//See semaphore_ex.h for more information
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
using std::cout;
using std::endl;

#include <systemc.h>
#include "semaphore_ex.h"
using namespace sc_core;
unsigned errors = 0;
const char* simulation_name = "semaphore_ex";

int sc_main(int argc, char* argv[]) {
  //sc_set_time_resolution(1,SC_PS);
  //sc_set_default_time_unit(1,SC_NS);
  semaphore_ex semaphore_ex_i("semaphore_ex_i");
  cout << "INFO: Starting "<<simulation_name<<" simulation" << endl;
  sc_start();
  cout << "INFO: Exiting "<<simulation_name<<" simulation" << endl;
  cout << "INFO: Simulation " << simulation_name
       << " " << (errors?"FAILED":"PASSED")
       << " with " << errors << " errors"
       << endl;
  return errors?1:0;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//END $Id: main.cpp,v 1.3 2003/11/21 16:38:30 dcblack Exp $
