/*
Author: Andrew Dale
*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

class Player{
  std::string name;
  int roll_num;
  int roll;
  public:
    Player(std::string n){this->name = n; this->roll_num = 0;}
    void setName(std::string n){this->name = n;}
    std::string getName(){return this->name;}
    void setRollNum(int r){this->roll_num = r;}
    int getRollNum(){return this->roll_num;}
    int getRoll(){return this->roll;}
    void rollDice(){
      int roll = rand() % 6 + 1;
      int roll2 = rand() % 6 + 1;
      this->roll = roll + roll2;
      setRollNum(this->roll_num + 1);
    }
};

int main(){
  Player player1("Fred");
  Player player2("George");
  srand(time(NULL));
  for(int i = 0; i < 3; i++){
    std::cout << "*******" << std::endl;
    std::cout << "Round " << i+1 << std::endl;
    std::cout << "*******" << std::endl;
    bool flag = true;
    while(flag){
      player1.rollDice();
      player2.rollDice();
      if(player1.getRoll() == 12 && player2.getRoll() == 12){
        std::cout << player1.getName() << " and " << player2.getName() 
        << " have tied in " << player1.getRollNum() << " roll(s)" << std::endl;
        flag = false;
      }
      else if(player1.getRoll() == 12){
        std::cout << player1.getName() << " wins in " << player1.getRollNum()
        << " roll(s)" << std::endl;
        flag = false;
      }
      else if(player2.getRoll() == 12){
        std::cout << player2.getName() << " wins in " << player2.getRollNum()
        << " roll(s)" << std::endl;
        flag = false;
      }
      if(!flag){
        player1.setRollNum(0);
        player2.setRollNum(0);
      }
    }
  }
}