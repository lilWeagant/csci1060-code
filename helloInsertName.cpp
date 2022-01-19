#include <iostream>
#include <string>

using namespace std;

int main() {

    string fname, lname;
//    string lname;

    cout << "Please enter your first and last name: "; //prompt user for first and last name
    cin >> fname >> lname;

    cout << "Hello " << fname << " " << lname << "!" << endl;

    return 0;
} 