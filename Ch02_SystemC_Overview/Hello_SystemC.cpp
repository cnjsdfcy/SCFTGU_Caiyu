//FILE:Hello_SystemC.cpp
#include <systemc> 
#include <Hello_SystemC.h>

void Hello_SystemC::main_method(void) {
    SC_REPORT_INFO("scftgu/ch2"," Hello SystemC world!");
    sc_core::sc_stop();
}
