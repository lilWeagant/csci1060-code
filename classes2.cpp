/*
Author: Andrew Dale
Edited by: Riley Weagant
*/
#include <iostream>
#include <string>

using namespace std;

class Player{
  string name;
  int roll_num;
  public:
    void setName(string n){this->name = n;}
    string getName(){return this->name;}
    void setRollNum(int r){this->roll_num = r;}
    int getRollNum(){return this->roll_num;}
};

int main(){
  Player player1;
  Player player2;
  
  player1.setName("Fred");
  player1.setRollNum(0);
  
  player2.setName("George");
  player2.setRollNum(0);
  
  
  cout << "Player 1 name: " << player1.getName() << ", Number of rolls: " 
  << player1.getRollNum() << endl;
  
  cout << "Player 2 name: " << player2.getName() << ", Number of rolls: " 
  << player2.getRollNum() << endl;
}