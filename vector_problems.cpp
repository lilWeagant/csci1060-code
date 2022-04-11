#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<string> readFile(string filename){
    string month;
    vector<string> months;
    ifstream file;
    file.open(filename);
    while(!file.eof()){
        file >> month; 
        months.push_back(month);
    }
    return months; //return months vector
}

void printVector(vector<string> v){
    vector<string>::iterator it;
    for (it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

vector<string> swapSix(vector<string> v){
    //create a vector to hold first six months
    vector<string> first;
    for (int i = 0; i < 6; i++){
        first.push_back(v[i]);
    }
    vector<string>::iterator it = v.begin();
    v.erase(it, it+6); //erase first six elements in v
    //insert elements in "first" at the end of v
    for (int i = 0; i < first.size(); i++){
        v.push_back(first[i]);
    }
    return v;
}

int main(){

    //write a function to read file -> take a filename, return a vector
    vector<string> months = readFile("months.txt");
    printVector(months);
    printVector(swapSix(months));


    return 0;
}