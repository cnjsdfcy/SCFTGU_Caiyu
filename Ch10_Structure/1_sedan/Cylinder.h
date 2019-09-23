#ifndef CYCLINDER_H
#define CYCLINDER_H
//BEGIN Cylinder.h
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//See sedan.h for more information
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <systemc>

SC_MODULE(Cylinder) {
  // Constructor
  SC_HAS_PROCESS(Cylinder);
  Cylinder(sc_module_name nm);
  // Processes
  void Cylinder_thread(void);
};

#endif
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//END $Id: Cylinder.h,v 1.3 2004/02/02 12:46:14 dcblack Exp $
