//BEGIN main.cpp
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <systemc>
#include "next_trigger.h"

using namespace sc_core; 
using namespace std;

int sc_main(int argc,char *argv[]) {
  cout << "INFO: Elaborating (constructing/binding)" << std::endl;
  next_trigger_example my_example("my_example");
  cout << "INFO: Starting simulation." << std::endl;
  sc_start(1,SC_SEC); // Simulate for 1 second
  cout << "INFO: Stopped simulating at " << sc_time_stamp() << "." << std::endl;
  cout << "INFO: next_trigger COMPLETED" << endl;
  return 0;
}//end sc_main()

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//END $Id: main.cpp,v 1.0 2003/35/21 06:35:06 dcblack Exp $
