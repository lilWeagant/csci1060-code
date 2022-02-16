#include <iostream>
#include <string>

using namespace std;

int main() {

    string sentence = "this is a longer sentence but not that different but hopefully gets the point across.";
    cout << sentence << endl;

    //toupper() method
    for (int i = 0; i < sentence.length(); i++){
        if (i == 0){
            sentence[i] = toupper(sentence[i]);
        }
        else if (sentence[i-1] == ' '){ //tells me if it's a new word (after space)
            sentence[i] = toupper(sentence[i]);
        }
    }

    cout << sentence << endl;
    return 0;
}