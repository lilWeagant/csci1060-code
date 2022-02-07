#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){
    /******************
     * OUTPUT FILE STREAM -- WRITE TO FILE
    string word;
    cout << "Enter a word to add to a file: " << endl;
    cin >> word;

    //outputting from our program to a file
    ofstream file;
    file.open("output_example.txt", ios::app); //file does not need to exist already
    file << '\n';
    file << word;
    file.close();
    */

    string car;
    ifstream file;
    file.open("input_example.txt");
    int numLines = 0;
    while(!file.eof()){
//        file >> car; 
        getline(file, car);
        cout << car << endl;
        numLines++;
    }
    cout << "This file has " << numLines << " lines" << endl;

    file >> car;
    cout << "The element is: " << car << endl;
    file.close();


    return 0;
}