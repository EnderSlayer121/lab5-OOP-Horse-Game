#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race {
  private:
    const static int NUM_HORSES = 5;
    const int TRACK_LENGTH = 15;
    Horse horses[];
  public:
    Race();
    void start();
};// end class

#endif
