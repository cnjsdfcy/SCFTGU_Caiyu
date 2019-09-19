//BEGIN main.cpp
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//See event_filled.h for more information
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <systemc.h>
#include "event_filled.h"

int sc_main(int argc, char* argv[]) {
  event_filled event_filled_i("event_filled_i");
  std::cout << "Starting event_filled simulation" << std::endl;
  sc_start();
  std::cout << "Exiting event_filled simulation" << std::endl;
  return 0;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//END $Id: main.cpp,v 1.2 2003/11/14 02:57:26 dcblack Exp $
