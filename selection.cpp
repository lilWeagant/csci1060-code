#include <iostream>

using namespace std;

int main(){

/* IF...ELSEIF...ELSE EXAMPLE */

    int grade;

    cout << "Enter a grade (0 - 100): ";
    cin >> grade;

    if (grade >= 60) {
        cout << "Passed" << endl;
    }
    else if ((grade < 60) && (grade >= 0)) {
        cout << "Failed" << endl;
    }
    else {
        cout << "Invalid input" << endl;
    }

/* IF..ELSE EXAMPLE */
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;

    if (number >= 1 && number <= 10){
        cout << "Number is between 1 and 10" << endl;
    }
    else {
        cout << "Number is less than 1 or greater than 10" << endl;
    }


/* SWITCH EXAMPLE */

    char grade;
    cout << "Please enter a letter grade (capital): ";
    cin >> grade;

    switch (grade)
    {
        case 'A':
            cout << "Excellent" << endl;
            break;
        case 'B':
            cout << "Good" << endl;
            break;
        case 'C':
            cout << "Average" << endl;
            break;
        case 'D':
            cout << "Not good" << endl;
            break;
        case 'F':
            cout << "Failed" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
    }
    cout << "You entered " << grade << endl;


    return 0;

}