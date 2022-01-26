#include <iostream>
#include <ctime>

using namespace std;

int main(){

    srand((unsigned) time(NULL)); //seed random number generator

    int num = rand(); //random number between 0 and at least 32767
    int num2 = rand()%10 + 1; //random number between 1 and 10
    int num3 = rand()%11; //random number between 0 and 10

    cout << "num: " << num << "; num2: " << num2 << "; num3: " << num3 << endl;

    return 0;
}