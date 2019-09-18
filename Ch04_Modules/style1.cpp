#include <systemc>
#include "style1.h"

using std::cout; using std::endl;
using sc_core::sc_start;

void basic_process_ex::my_thread_process(void) {
    cout << "my_thread_process executed within "
         << name() //method of sc_module, returns sc_module instance name
         << endl;
}

int sc_main(int argc, char* argv[])
{
    basic_process_ex my_instance("style1");
    sc_start();
    return 0;
}
