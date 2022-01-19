#include <iostream>
#include <string>

using namespace std;

int main() {

    string fname;

    cout << "Please enter your first name: "; //prompt user for first name
    cin >> fname;

    cout << "Hello " << fname << "!" << endl;

    return 0;
}