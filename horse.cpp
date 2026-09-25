#include <iostream>
#include "horse.h"

Horse::Horse(){
  Horse::position = 0;
  Horse::index = 0;
  Horse::trackLength = 15;
}// end Horse

void Horse::init(int index, int trackLength){
  Horse::position = 0;
  Horse::index = index;
  Horse::trackLength = trackLength;
  /*std::cout << "Horse #" << Horse::index << ", Horse Position is " << Horse::position << std::endl;*/
}// end init

void Horse::advance(){
  int coin = rand() % 2;
  Horse::position += coin;
  /*std::cout << "Horse " << Horse::index << " moved = " << coin << ", Horse Position is now = " << Horse::position << std::endl;*/
}// end advance

void Horse::printLane(){
  for (int laneNum = 0; laneNum <= Horse::trackLength; laneNum++){
    if (Horse::position == laneNum){
      std::cout << Horse::index;
    }// end if
    else{
      std::cout << ".";
    }// end else
  }// end for
  std::cout << std::endl;
}// end printLane

bool Horse::isWinner(){
  bool result = false;
  if (Horse::position >= Horse::trackLength){
    result = true;
    std::cout << "Horse " << Horse::index << " Wins!" << std::endl;
  }// end if
  return result;
}// end isWinner
