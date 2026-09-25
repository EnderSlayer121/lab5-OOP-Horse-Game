#include "race.h"
#include "horse.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Race::Race(){
  const static int Race::NUM_HORSES = 5;
  const int Race::TRACK_LENGTH = 15;
  srand(time(NULL));
  Race::horses[0, 0, 0, 0, 0];
  for (int index = 0; index < Race::NUM_HORSES; index++){
    Horse.init(index, Race::TRACK_LENGTH);
  }//end for
}//end Race

void Race::start(){
  Horse h
  bool keepGoing = true;
  while (keepGoing){
    for (int index = 0; index < Race::NUM_HORSES; index++){
      h.advance();
      h.printLine();
      if (h.isWinner()){
        keepGoing = false;  
      }// end if
    }//end for
    std::cout << "Press Enter to continue" << std::endl;
    std::cin << std::endl;
  }//end while
}//end start
