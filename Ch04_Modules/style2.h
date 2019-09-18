#ifndef BASIC_PROCESS_EX_H
#define BASIC_PROCESS_EX_H

using namespace sc_core;
class basic_process_ex : public sc_module {
    public:
        //basic_process_ex(sc_module_name module_name);
        SC_HAS_PROCESS(basic_process_ex);
        basic_process_ex(sc_module_name module_name);

    private:
        void my_thread_process(void);
};
#endif
