#include <iostream>

using namespace std;

/*
1. Write a function, add, that takes 1 integer parameter and adds it to itself
2. Write a function, add, that takes 2 integer parameters and adds them together
3. Write a function, add, that takes 3 integer parameters and adds them together
4. Write a function, add, that takes 2 double parameters and adds them together
*/

int add(int);
int add(int, int);
int add(int, int, int);
double add(double, double);

int main(){

    cout << "1 parameter: " << add(5) << endl; //should execute 1
    cout << "2 parameters: " << add(5, 10) << endl; //should execute 2
    cout << "3 parameters: " << add(5, 10, 15) << endl; //should execute 3
    cout << "Double: " << add(5.5, 10.5) << endl; //should execute 4

    return 0;
}

int add(int num1){ //1
    return num1 + num1;
}

int add(int num1, int num2){ //2
    return num1 + num2;
}

int add(int num1, int num2, int num3){ //3
    return num1 + num2 + num3;
}

double add(double num1, double num2){ //4
    return num1 + num2;
}