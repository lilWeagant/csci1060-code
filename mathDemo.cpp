#include <iostream>

int main() {

    //variable declarations
    int firstNum = 0; //initialize firstNum to 0
    int secondNum = 0; //initialize secondNum to 0
    int sum = 0; //initialize sum to 0

    std::cout << "Enter an integer: "; //prompt user for data
    std::cin >> firstNum; //read first integer into firstNum

    std::cout << "Enter another integer: "; //prompt user for data
    std::cin >> secondNum; //read second integer into secondNum

    sum = firstNum + secondNum; //calculate sum by adding firstNum and secondNum

    std::cout << "The sum of the numbers you entered is " << sum << std::endl; //display sum, end line
} //end of main
