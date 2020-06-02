//BEGIN large_memory_map.cpp
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// DESCRIPTION
//   An example of a large memory modeled using the STL map<> container.
//
// NOTE: This does not require SystemC.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
#include <map>
#include <cstdlib>
using std::cout;
using std::endl;
using std::rand;

int main(int argc, char* argv[]) {
  cout << "INFO: Starting large_memory_map" << endl;

  typedef unsigned long ulong;
  std::map<ulong, int> lmem; // possible 2^64 locations!
  // Fill ten random locations with random values
  while (lmem.size() < 10) {
    ulong addr;
    addr = rand();
    lmem[addr] = rand(); // 10 random memory location/values
  }//endwhile

  // Display memory contents
  typedef std::map<ulong,int>::const_iterator iter;
  for (iter iv=lmem.begin();iv!=lmem.end();++iv) {
    std::cout << std::hex
      << "lmem[0x" << iv->first 
      << "]=0x" << iv->second << ";" << std::endl;
  }//endfor
  cout << "INFO: large_memory_map COMPLETED" << endl;
  return 0;
}//end main()
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//END $Id: sparse_memory_map.cpp,v 1.2 2003/10/30 13:59:11 dcblack Exp $
