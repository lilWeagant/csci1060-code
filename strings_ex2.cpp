#include <iostream>
#include <string>

using namespace std;

int main() {

    string word = "awesome";
    string rword = "";
    for (int i = word.length()-1; i >= 0; i--){
        rword += word[i];
    }
    cout << rword << endl;
    return 0;
}