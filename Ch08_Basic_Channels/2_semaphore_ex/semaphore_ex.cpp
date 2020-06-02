//BEGIN semaphore_ex.cpp
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//See semaphore_ex.h for more information
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include "semaphore_ex.h"
using namespace sc_core;

void semaphore_ex::customer1_thread(void) {
  customer("customer1");
}//end customer1_thread()

void semaphore_ex::customer2_thread(void) {
  customer("customer2");
}//end customer2_thread()

void semaphore_ex::customer3_thread(void) {
  customer("customer3");
}//end customer3_thread()

void semaphore_ex::customer4_thread(void) {
  customer("customer4");
}//end customer4_thread()

void semaphore_ex::customer5_thread(void) {
  customer("customer5");
}//end customer5_thread()

// Common behavior
void semaphore_ex::customer(const char* who) {
  for(;;) {
    // 60MINS to empty
    delay(60*MINS,30);
    note(who,"Empty");

    if (!fills) //total 35 times fills
        break;

    //blocking-waiting for filling
    pump.wait();
    e_change.notify();
    note(who,"Filling up");
    delay(15*MINS,120); //one fill takes 15MINS
    fills--;
    pump.post();

    e_change.notify();
    note(who,"Full");
  }//endfor
}//end customer()

#include <iostream>
#include <iomanip>
using std::cout;
using std::setw;
using std::setfill;
using std::endl;

void semaphore_ex::monitor_method(void) {
  cout << "INFO: Monitor " << pump.get_value() << " available" << endl;
}//end monitor_method()

void semaphore_ex::delay(sc_time t, int uncertainty) {
    int r = rand() % uncertainty;
    // calculate actual delay
    sc_time d = t - (r - uncertainty/2)/60.0*MINS;
    if (d < SC_ZERO_TIME) d = SC_ZERO_TIME; // cannot delay negative
    wait(d);
}//end semaphore_ex::delay()

void semaphore_ex::note(const char* who, const char* message) {
  double t = sc_time_stamp().to_seconds();
  unsigned  m = int(t);
  unsigned  h = m/60;
  m -= 60*h;
  cout << "NOTE: " 
       << setw(2) << h << ":"
       << setw(2) << setfill('0') << m << " "
       << who << ": "
       << message 
       << endl;
}//end mutex_ex::note()
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//END $Id: semaphore_ex.cpp,v 1.1 2003/11/25 12:55:40 dcblack Exp $
