#include<iostream>
#include<string>

using namespace std;

class Cars {
    private:
        string make;
        string model;
        int mileage;
    public:
        Cars(string ma, string mo, int mi){
            make = ma;
            model = mo;
            mileage = mi;
        }
        Cars(string ma, string mo, double mi) {
            make = ma;
            model = mo;
            mileage = mi;
        }
        Cars(){
            make = "default_make";
            model = "default_model";
            mileage = 0;
        }
        string getMake() {return make;} //accessor (getter)
        void setMake(string m){make = m;} //mutator (setter)
        string getModel() {return model;}
        void setModel(string m){model = m;}
        int getMileage() {return mileage;}
        void setMileage(int m){mileage = m;}
};

int main(){

    Cars car1; //create a new object of type Cars

    car1.setMake("Chevrolet"); //define the "make" variable of car1
    car1.setModel("Cruze"); //define the "model" variable of car1
    car1.setMileage(15); //define the "mileage" variable of car1

    cout << car1.getMake() << endl;
    cout << car1.getModel() << endl;
    cout << car1.getMileage() << endl;

    Cars car2("Toyota", "Corolla", 15); //passing values as parameters to constructor

    cout << "Car1 Make: " << car1.getMake() << endl;
//    cout << "Car1 Make: " << car1.make << endl; //doesn't work...make is private
    cout << "Car1 Model: " << car1.getModel() << endl;
    cout << "Car2 Make: " << car2.getMake() << endl;
    cout << "Car2 Model: " << car2.getModel() << endl;

    return 0;
}