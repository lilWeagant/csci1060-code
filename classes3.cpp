/*
Author: Andrew Dale
Edited by: Riley Weagant
*/
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Player{
  string name;
  int roll_num;
  int roll;
  public:
    Player(string n){this->name = n; this->roll_num = 0;}
    void setName(string n){this->name = n;}
    string getName(){return this->name;}
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
    cout << "*******" << endl;
    cout << "Round " << i+1 << endl;
    cout << "*******" << endl;
    bool flag = true;
    while(flag){
      player1.rollDice();
      player2.rollDice();
      if(player1.getRoll() == 12 && player2.getRoll() == 12){
        cout << player1.getName() << " and " << player2.getName() 
        << " have tied in " << player1.getRollNum() << " roll(s)" << endl;
        flag = false;
      }
      else if(player1.getRoll() == 12){
        cout << player1.getName() << " wins in " << player1.getRollNum()
        << " roll(s)" << endl;
        flag = false;
      }
      else if(player2.getRoll() == 12){
        cout << player2.getName() << " wins in " << player2.getRollNum()
        << " roll(s)" << endl;
        flag = false;
      }
      if(!flag){
        player1.setRollNum(0);
        player2.setRollNum(0);
      }
    }
  }
}