#include <iostream>
#include <string>

using namespace std;

/*
1. Write a function "isLarger" that returns true if number1 > number2, and false otherwise
2. Write a function "display" that returns a message to be displayed from the main function
*/
//1.
bool isLarger(int number1, int number2){
//    cout << num1 << endl;
    if (number1 > number2){
        return true; //could return 1
    }
    else {
        return false; //could return 0
    }
}

//2.
string message(){
    return "Hello from the message function";
} 

int main(){
    int num1 = 6;
    int num2 = 4;
    bool result = isLarger(num1, num2);
 //   cout << number1 << endl;
    cout << "The result of the isLarger function is: " << result << endl;
    //true = 1, false = 0

    cout << message() << endl;
    //OR
    string m = message();
    cout << m << endl;

    return 0;
}

