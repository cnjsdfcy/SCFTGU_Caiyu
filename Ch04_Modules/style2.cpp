#include <systemc>
#include "style2.h"

using std::cout; using std::endl;
using namespace sc_core;

basic_process_ex::basic_process_ex(sc_module_name module_name)
    : sc_module(module_name)
{
    SC_THREAD(my_thread_process);
}

void basic_process_ex::my_thread_process(void) {
    cout << "my_thread_process executed within "
         << name() //method of sc_module, returns sc_module instance name
         << endl;
}

int sc_main(int argc, char* argv[])
{
    basic_process_ex my_instance("style2");
    sc_start();
    return 0;
}
