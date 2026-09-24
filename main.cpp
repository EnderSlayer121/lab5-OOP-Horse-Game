#include <iostream>
#include <cstdlib>
#include <ctime>
#include "horse.h"

int main(){
  srand(time(NULL));
  bool keepGoing = true;
  int num;
  Horse horse;
  horse.init(0, 15);
  while(keepGoing){
    horse.advance();
    horse.printLane();
    std::cout << "Type 0 to end, otherwise continue" << std::endl;
    std::cin >> num;
    if (num == 0){
      keepGoing = false;
    }// end if
    else if (horse.isWinner()){
      keepGoing = false;
    }// end else if
  }//end while
}// end main
