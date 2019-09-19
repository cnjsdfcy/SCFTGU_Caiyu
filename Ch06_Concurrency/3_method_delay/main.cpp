//BEGIN main.cpp
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// DESCRIPTION
//   This example illustrates how to insert time delays into SC_METHODs.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <systemc>
using namespace sc_core; 
#include "method_delay.h"
using namespace std;
int sc_main(int argc, char* argv[]) {
  cout << "Elaborating" << endl;
  method_delay delay_i("delay_i");
  cout << "Simulating" << endl;
  sc_start(6*FIVE);
  cout << "INFO: method_delay COMPLETED" << endl;
  return 0;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//END $Id: main.cpp,v 1.1 2003/10/20 17:24:28 dcblack Exp $
