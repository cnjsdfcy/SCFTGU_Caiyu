#ifndef BODY_H
#define BODY_H
//BEGIN Body.h
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//See convertible.h for more information
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <systemc>
#include "Wheel.h"

SC_MODULE(Body) {
  // Sub-module instances
  Wheel* Wheel_FR;
  Wheel* Wheel_FL;
  Wheel* Wheel_RR;
  Wheel* Wheel_RL;
  // Constructor
  SC_HAS_PROCESS(Body);
  Body(sc_module_name nm); // Constructor
  // Processes
  void Body_thread(void);
};

#endif
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//END $Id: Body.h,v 1.3 2004/02/02 12:32:26 dcblack Exp $
