#include <iostream>
#include <string>

using namespace std;

const int SIZE = 3;
char board[SIZE][SIZE];
//game pieces
const char X = 'X';
const char O = 'O';
//game setup
void initializeBoard();
void displayBoard();
void addPiece(char, bool);
bool findWinner(bool); //could also include position as a parameter

int main() {  //control the flow of our program/game

    bool isX = true; //true if it is X's turn, false if O's turn
    bool won = false; //set to true if a player wins the game
    int totalMoves = SIZE * SIZE; //total spaces on game board
    char position; //value from the user to place game piece

    //initialize board -> set values 1 - 9
    initializeBoard();
    displayBoard();

    //gameplay loop
    while ((totalMoves > 0) && !won) {
        cout << "Where would you like to play?" << endl;
        cin >> position;
        addPiece(position, isX); //add a piece to the board
        totalMoves--;
        won = findWinner(isX);
        isX = !isX; //will swap value of isX
    }
    if ((!isWon) && (totalMoves == 0)){
        cout << "It's a tie!" << endl;
    }

    return 0;
}

bool findWinner(bool isX){
    char piece;
    if (isX){
        piece = X;
    } else {
        piece = O;
    }

    /*
    X X X
    4 5 6
    7 8 9
    */
   if (board[0][0] == piece && board[0][1] == piece && board[0][2] == piece){
       cout << piece << " wins!" << endl;
       return true;
   }
   /*
   1 2 3
   X X X
   7 8 9
   */
    else if (board[1][0] == piece && board[1][1] == piece && board[1][2] == piece){
        cout << piece << " wins!" << endl;
        return true;
    }

  /*
  1 2 3 
  4 5 6
  X X X
  */
    else if (board[2][0] == piece && board[2][1] == piece && board[2][2] == piece){
        cout << piece << " wins!" << endl;
        return true;
    }

    /*
    X 2 3
    X 5 6
    X 8 9
    */
    else if (board[0][0] == piece && board[1][0] == piece && board[2][0] == piece ){
        cout << piece << " wins!" << endl;
        return true;
    }

    /*
    1 X 3
    4 X 6
    7 X 9
    */

    else if (board[0][1] == piece && board[1][1] == piece && board[2][1] == piece){
        cout << piece << " wins!" << endl;
        return true;
    }

    /*
    1 2 X
    4 5 X
    7 8 X
    */
   else if (board[0][2] == piece && board[1][2] == piece && board[2][2] == piece){
       cout << piece << " wins!" << endl;
       return true;
   }

   /*
   X 2 3
   4 X 6
   7 8 X
   */

    else if (board[0][0] == piece && board[1][1] == piece && board[2][2] == piece){
        cout << piece << " wins!" << endl;
        return true;
    }

    /*
    1 2 X
    4 X 6
    X 8 9
    */
   else if (board[0][2] == piece && board[1][1] == piece && board[2][0] ==  piece){
       cout << piece << " wins!" << endl;
       return true;
   }

 
}

void addPiece(char position, bool isX){
    cout << "Placing on position " << position << endl;
    cout << "Value of isX: " << isX << endl;

    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            if (board[i][j] == position){
                if (isX){
                    board[i][j] = X;
                }
                else {
                    board[i][j] = O;
                }
            }
        }
    }
    displayBoard();
}

void initializeBoard(){
    int count = 1; //value used to populate array
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            board[i][j] = count + '0'; //+ '0' converts count from int to char
            count++;
        }
    }
}

void displayBoard(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}