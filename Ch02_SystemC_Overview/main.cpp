//FILE:main.cpp
#include <systemc> 
#include <Hello_SystemC.h>

using namespace sc_core;

int sc_main(int argc, char* argv[]) {
    const sc_time t_PERIOD(8,SC_NS);
    sc_clock clk("clk",t_PERIOD);
    Hello_SystemC iHello_SystemC("iHello_SystemC");
    iHello_SystemC.clk_pi(clk);

    sc_start();
    return 0;
}
