#ifndef SRC_H
#define SRC_H
//BEGIN src.h
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// DESCRIPTION
//   See fifo_of_ptr.h


#include <systemc>
#include "mydata.h"

SC_MODULE(src) {
  sc_core::sc_fifo_out<mydata*> out;
  SC_CTOR(src):count(0) {
    SC_THREAD(src_thread);
  }
  void src_thread(void);
  unsigned count;
};

#endif
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//END $Id: src.h,v 1.2 2004/02/02 12:37:18 dcblack Exp $
