//FILE: main.cpp (systemc)
//# vim600:set sw=2 tw=0 fdm=marker:
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// DESCRIPTION
//   Simple example of sc_logic and sc_lv. These are defined in
//   $SYSTEMC/include/systemc/bit/
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
using std::cout;
using std::endl;

#include <systemc>
using namespace sc_dt; 

int sc_main(int argc, char* argv[]) {
  sc_logic buf(sc_dt::Log_Z);
  sc_lv<8> data_drive("zz01XZ1Z");
  data_drive.range(5,4) = "ZZ";// ZZZZXZ1Z
  buf = '1';
  buf = SC_LOGIC_1;
  cout << "INFO: buf is '" << buf << "'" << endl;
  cout << "INFO: data_drive is '" << data_drive << "'" << endl;

  return 0;
}

//Portions COPYRIGHT (C) 2003-2004 Eklectic Ally, Inc.-------------{{{//
// Permission granted for anybody to use this example provided this   //
// acknowledgement of Eklectic Ally, Inc. remains.                    //
//-----------------------------------------------------------------}}}//
//END $Id: main.cpp,v 1.5 2004/02/21 21:04:35 dcblack Exp $
