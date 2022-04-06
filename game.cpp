#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

struct Die{
    int roll(){
        int x = rand()%6 + 1;
        return x;
    }
}d; //create an instance of the Die struct called d

int main(){

    srand((unsigned)time(0)); //seed random number generator

//    Die d; //creates an instance of the Die struct (object) called d
//    vector<int> turn = {d.roll(), d.roll()}; // represents 2 dice rolls

    /*
    Automatically play 3 rounds of the game
    */
    vector<int> turn;

    for (int i = 1; i <= 3; i++){
        turn.clear();
        cout << "---------------------" << endl;
        cout << "Round " << i << endl;
        cout << "---------------------" << endl;
        turn.push_back(d.roll());
        turn.push_back(d.roll());
        cout << "Size of vector: " << turn.size() << endl;
        cout << "You rolled " << turn[0] << " and " << turn[1] << endl;    
    }
//    vector<int> turn;
//    turn.push_back(d.roll()); //rolls die the first time
//    turn.push_back(d.roll()); //rolls die the second time

//    cout << "You rolled a " << turn[0] << " and a " << turn[1] << endl; 

    return 0;
}