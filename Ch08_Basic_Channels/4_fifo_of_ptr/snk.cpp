//BEGIN snk.cpp
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// DESCRIPTION
//   See fifo_of_ptr.h

#include "snk.h"
#include "defines.h"
using namespace sc_core;

void snk::snk_method(void) {
  mydata* ptr;
  while (in->nb_read(ptr)) {
    count++;
    if (ptr->data() == STOP) {
      std::cout
        << "DETECTED STOP"
        << std::endl;
      delete ptr; // cleanup
      sc_stop();
    } else {
      std::cout
        << "R" << count << " "
        << "received " << ptr->data()
        << std::endl;
      delete ptr; // cleanup
    }//endif
  }//endwhile
}//end snk_method()

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//END $Id: snk.cpp,v 1.1 2004/01/17 05:09:07 dcblack Exp $
