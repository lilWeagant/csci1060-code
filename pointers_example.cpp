#include<iostream>

using namespace std;

//void swap(int&, int&); //pass by reference swap function
void swap(int*, int*); //pointer swap function

int main(){

    int a = 10, b = 5;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    int* p1 = &a;
    int* p2 = &b;
//    swap(a, b);
    swap(p1, p2);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}

void swap(int* x, int* y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
    cout << "Pointer x: " << x << endl;
    cout << "Derefereced x: " << *x << endl;
}
/*
void swap(int& x, int& y){
    int tmp = x;
    x = y;
    y = tmp;

}
*/