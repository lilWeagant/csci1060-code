#include <iostream>
#include <string>

using namespace std;

int main() {

    /*Write a program to calculate the sum of numbers between 1- 10 (with each loop)*/

    //while loop
    
    int sum = 0;
    int counter = 1; 
    while (counter <= 10){
        sum = sum + counter;
        cout << "Current counter: " << counter << endl;
        cout << "Current sum: " << sum << endl;
        counter++;
    }
    cout << "Total sum: " << sum << endl;
    
    /* Expected Output:
    Current counter: 1
    Current sum: 1
    Current counter: 2
    Current sum: 3
    Current counter: 3
    Current sum: 6
    .
    .
    .
    Current counter: 10
    Current sum: ???? total sum amount

    Total sum: ???? total sum amount
    */
   //for loop implementation
    int sum = 0;
    for (int i = 1; i <= 10; i++){
        cout << "Current counter: " << i << endl;
        sum = sum + i;
        cout << "Current sum: " << sum << endl;
    }
    cout << "Total sum: " << sum << endl;
    

   /*Ask user to enter names until they enter "done"*/

    string name;
    do {
        cout << "Please enter a name (enter done if finished): " << endl;
        cin >> name;
    } while (name != "done");


    //display numbers divisible by 3 between 1 and 10
    for (int i = 1; i <= 10; i++){
        if (i%3 == 0){ // % operator returns the remainder 
            cout << i << endl; //display i if it is divisible by 3 -> remainder of i/3 is 0
        }
    }

    return 0;
}

