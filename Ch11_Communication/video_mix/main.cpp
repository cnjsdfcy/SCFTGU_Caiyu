//FILE: main.cpp (systemc)
//# vim600:set sw=2 tw=0 fdm=marker:
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//See video_mix.h for more information
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
using std::cout;
using std::endl;

#include <systemc>
using namespace sc_core;
#include "video_mix.h"

unsigned errors = 0;
const char* simulation_name = "video_mix";

int sc_main(int argc, char* argv[]) {

  //outside channels
  sc_fifo<YCRCB_frame>  dvd_in_fifo;
  sc_fifo<MIXER_ctrl>  ctrl_in_fifo;
  sc_fifo<YCRCB_frame>  video_out_fifo;
  sc_fifo<MIXER_state> status_out_fifo;
  sc_fifo<RGB_frame> rgb_in_fifo;

  cout << "INFO: Elaborating "<< simulation_name << endl;
  //sc_set_time_resolution(1,SC_PS);
  //sc_set_default_time_unit(1,SC_NS);
  video_mix video_mix_i("video_mix_i");
  //connect ports to outside channels
  video_mix_i.dvd_pi(dvd_in_fifo);
  video_mix_i.control(ctrl_in_fifo);
  video_mix_i.video_po(video_out_fifo);
  video_mix_i.status(status_out_fifo);
  video_mix_i.rgb_pi(rgb_in_fifo);

  cout << "INFO: Simulating "<< simulation_name << endl;
  sc_start();
  cout << "INFO: Post-processing "<< simulation_name << endl;
  cout << "INFO: Simulation " << simulation_name
       << " " << (errors?"FAILED":"PASSED")
       << " with " << errors << " errors"
       << endl;
  return errors?1:0;
}

//Portions COPYRIGHT (C) 2003-2004 Eklectic Ally, Inc.-------------{{{//
// Permission granted for anybody to use this example provided this   //
// acknowledgement of Eklectic Ally, Inc. remains.                    //
//-----------------------------------------------------------------}}}//
//END $Id: main.cpp,v 1.5 2004/02/21 21:04:35 dcblack Exp $
