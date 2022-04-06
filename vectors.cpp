#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> createVector(){
    vector<int> tmp;
    tmp = {1, 2, 3};
    return tmp;
}

int main(){

    vector<int> intVec = createVector();

    for (int i = 0; i < intVec.size(); i++){
        cout << intVec[i] << " ";
    }
    cout << endl;

    return 0;
}