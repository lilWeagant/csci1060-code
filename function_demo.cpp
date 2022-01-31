#include <iostream>
#include <string>

using namespace std;

/*1. take a first, last, and age from user in main and display from displayInfo*/
/*2. Check to see if number is odd and less than 20 (isLessThan20, isOdd)*/

//void displayInfo(string, string, int); //function declaration -> parameter types
void isLessThan20(int); //isLessThan20 is a void function expecting 1 integer parameter
void isOdd(int); //isOdd is a void function expecting 1 integer parameter

int main(){
    /*
    string fname, lname;
    int age;

    cout << "Please enter your first name: ";
    cin >> fname;

    cout << "Please enter your last name: ";
    cin >> lname;

    cout << "Please enter your age: ";
    cin >> age;

    displayInfo(fname, lname, age); //pass values to displayInfo
    */
    int number;
    cout << "Please enter an integer: ";
    cin >> number;
    isLessThan20(number);
//    isOdd(number);

    return 0;
}

void isLessThan20(int num){
    if (num < 20){
        cout << num << " is less than 20" << endl;
        isOdd(num);
    }
}

void isOdd(int num){
    //odd if not divisible by 2
    if (num%2 != 0) { //num%2 == 0 if even, num%2 != 0 if odd
        cout << num << " is odd" << endl;
    }
}


/*
void displayInfo(string first_name, string last_name, int user_age){  //parameter names (variable names)
    cout << first_name << " " << last_name << " is " << user_age << " years old." << endl;
}
*/