#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Processing {
//    private:
    int data[100]; //array to store integer data from a file
    int size; //store size fo the array
    public:
        void importData(string filename); //import the data, read the file
        void printValues(); //print values from the file
        int findAverage();//find average of numbers from the file
};

void Processing::importData(string filename){
    ifstream myInput;
    size = 0;
    myInput.open(filename);
    while(!myInput.eof()){
        int d;
        myInput >> d;
        data[size] = d;
        size++;
    }
}

void Processing::printValues(){
    for (int i = 0; i < size; i++){
        cout << data[i] << " ";
    }
    cout << endl;
}

int Processing::findAverage(){
    int total = 0;
    for (int i = 0; i < size; i++){
        total += data[i];
    }
    return total/size;
}

int main(){

    Processing p1;
    p1.importData("data.txt");
    cout << "Values in p1: ";
    p1.printValues();
    cout << "Average of p1: " << p1.findAverage() << endl;

    Processing p2;
    p2.importData("data2.txt");
    cout << "Values in p2: ";
    p2.printValues();
    cout << "Average of p2: " << p2.findAverage() << endl;

    return 0;
}