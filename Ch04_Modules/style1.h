#ifndef BASIC_PROCESS_EX_H
#define BASIC_PROCESS_EX_H

SC_MODULE(basic_process_ex) {
    SC_CTOR(basic_process_ex) {
        SC_THREAD(my_thread_process);
    }

    void my_thread_process(void);
}; //notice this semicolon
#endif
