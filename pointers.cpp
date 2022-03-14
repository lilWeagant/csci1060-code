#include <iostream>

using namespace std;

int main(){

    int v1, v2;
    int* p1;

    p1 = &v1; //assigns memory address of v1 to p1
    *p1 = 10; //assign value of 10 to v1 through p1

    p1 = &v2; //p1 points to v2
    *p1 = 20; 

    cout << "v1: " << v1 << endl; //expect to print 20
    cout << "v2: " << v2 << endl; //expect to print 20

    return 0;
}