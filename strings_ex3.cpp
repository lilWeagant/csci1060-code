#include <iostream>
#include <string>

using namespace std;

int main() {

    string word = "awesome";
//    string word = "zap";

    for (int i = 0; i < word.length(); i++){
        if(word[i] == 'z' || word[i] == 'Z'){
            word[i] = word[i]-25; //wrap back to a or A
        } else {
            word[i] = word[i] + 1;
        }
    }
    cout << word << endl;

    return 0;
}