#include <iostream>
#include <string>

using namespace std;

void sort(int[], int);
void swap(int&, int&); //pass by reference
void printArray(int[], int); 

int main() {
    
    int arr[] = {6, 45, 32, 99, 5, 11, 56};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Original Array:" << endl;
    printArray(arr, size); //print original array
    sort(arr, size);
    cout << "Sorted Array:" << endl;
    printArray(arr, size); //print sorted array

    return 0;
}

void sort(int arr[], int size){
    
    for (int i = 0; i < size -1; i++){
        for (int j = 0; j < size-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]); //getting passed by reference
            }
        }
    }
}

void swap(int &x, int &y){ //pass values by reference
    int tmp = x; //assign value of x to variable tmp
    x = y; //assign value of y to variable x
    y = tmp; //assign value of tmp back to y
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}