#include <iostream>
#include <string>

using namespace std;

int main() {

    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    //initializeBoard function set values 1 - 9
    //display board
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

}