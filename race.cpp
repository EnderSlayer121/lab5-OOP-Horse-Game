#include "race.h"
#include "horse.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Race::Race(){
  srand(time(NULL));
  Race::horses[0, 0, 0, 0, 0];
  for (int index = 0; index < Race::NUM_HORSES; index++){
    horses[index].init(index, Race::TRACK_LENGTH);
  }//end for
}//end Race

void Race::start(){
  std::string next;
  bool keepGoing = true;
  std::cout << "Horse Race Game: " << std::endl;
  while (keepGoing){
    for (int index = 0; index < Race::NUM_HORSES; index++){
      horses[index].advance();
      horses[index].printLane();
      if (horses[index].isWinner()){
        keepGoing = false;  
      }//end if
    }//end for
    if (keepGoing){  
      std::cout << "Press Enter to continue" << std::endl;
      std::getline(std::cin, next);
    }//end if
  }//end while
}//end start
