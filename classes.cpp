#include<iostream>
#include<string>

using namespace std;

class Cars {
    private:
        string make;
        string model;
        int mileage;
    public:
        Cars(){
            make = "Chevrolet";
            model = "Spark";
            mileage = 15;
        }
        Cars(string ma, string mo, int mi){
            make = ma;
            model = mo;
            mileage = mi;
        }
        string getMake() {return make;} //accessor (getter)
        void setMake(string m){make = m;} //mutator (setter)
        string getModel() {return model;}
        void setModel(string m){model = m;}
        int getMileage() {return mileage;}
        void setMileage(int m){mileage = m;}
};

int main(){

    Cars car1; //using default constructor
    car1.setMake("Honda"); //overwriting default value of Chevrolet
    car1.setModel("Civic"); //overwriting default value of Spark
    car1.setMileage(16); //overwriting default value of 15

    Cars car2("Toyota", "Corolla", 15); //passing values as parameters to constructor

    cout << "Car1 Make: " << car1.getMake() << endl;
//    cout << "Car1 Make: " << car1.make << endl; //doesn't work...make is private
    cout << "Car1 Model: " << car1.getModel() << endl;
    cout << "Car2 Make: " << car2.getMake() << endl;
    cout << "Car2 Model: " << car2.getModel() << endl;

    return 0;
}