#include <iostream>
#include <string>

using namespace std;

int main() {

//    int myArray[5];

    /*
    myArray[0] = 1; //assign integer value to first position
    myArray[1] = 2;
    myArray[2] = 3;
    myArray[3] = 4;
    myArray[4] = 5;
    */
//    int myArray[5] = {1, 2, 3, 4, 5};
    int size = 5; //this is newer, used to need to be const
    int myArray[size];
    
    //assign values to myArray
    for (int i = 0; i < size; i++){ //assign values 1 - 5 to myArray
        myArray[i] = i+1; //assign 1 to position 0, 2 to position 1, etc.
    }

    //print value from myArray
    for (int i = 0; i < size; i++ ){
        cout << "Value at position " << i << ": " << myArray[i] << endl;
    }

    int size_of = sizeof(myArray);
    int size2 = sizeof(myArray[0]);
    int total_size = sizeof(myArray)/sizeof(myArray[0]); //divides total bytes of array by total bytes of single element
    cout << "Size of whole array: " <<size_of << endl;
    cout << "Size of single array element: " << size2 << endl;
    cout << "Size of array: " << total_size << endl;

    /*
    cout << "Enter the first element: " << endl;
    cin >> myArray[0];
    cout << "Enter the second element: " << endl;
    cin >> myArray[1];
    cout << "Enter the third element: " << endl;
    cin >> myArray[2];
    cout << "Enter the fouth element: " << endl;
    cin >> myArray[3];
    cout << "Enter the fifth element: " << endl;
    cin >> myArray[4];

    cout << "First element: " << myArray[0] << endl;
    cout << "Second element: " << myArray[1] << endl;
    cout << "Third element: " << myArray[2] << endl;
    cout << "Fourth element: " << myArray[3] << endl;
    cout << "Fifth/last element: " << myArray[4] << endl;
    */

//    cout << "My Array: " << myArray << endl;

    /*
    ONE-DIMENSIONAL ARRAY DEMO
    */
    //define array

    
    //manually assign values to each position

    //manually print values

    //assign user-input values to array
    
    //use loop to assign/read values
	
    /*
    MULTI-DIMENSIONAL ARRAY DEMO
    */
	return 0;


}