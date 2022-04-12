/*
Author: Andrew Dale
Edited by: Riley Weagant
*/
#include <iostream>
#include <string>

using namespace std;

class Player{
  public:
    string name;
    int roll_num;
};

int main(){
  Player player1;
  Player player2;
  
  player1.name = "Fred";
  player1.roll_num = 2;
  
  player2.name = "George";
  player2.roll_num = 4;
  
  cout << "Player 1 name: " << player1.name << ", Number of rolls: " 
  << player1.roll_num << endl;
  
  cout << "Player 2 name: " << player2.name << ", Number of rolls: " 
  << player2.roll_num << endl;
}