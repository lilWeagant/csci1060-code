#include <iostream>
#include <string>

using namespace std;

string positiveNegative(int num);

int main(){

    int number;
    cout << "Please enter a number: " << endl;
    cin >> number;

    cout << "The number you entered is " << positiveNegative(number) << endl;

    return 0;
}

string positiveNegative(int num){
    //positive is greater than 0 --> consider 0 positive
    //negative is less than 0
    if (num >= 0){
        //number is positive
        return "Positive";
    }
    else {
        //number is less than 0
        //number is negative
        return "Negative";
    }
}