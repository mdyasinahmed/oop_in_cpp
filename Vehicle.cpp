#include <iostream>
#include <string>
using namespace std;

// Base Class
class Vehicle {
    public:
        string brand = "Toyota";
        void horn(){
            cout << "Pip Pip! \n" ;
        }  
};

// Derived class
class Car: public Vehicle {
    public:
        string model = "Axiata";
};


int main() {
    Car myCar;
    myCar.horn();
    cout << myCar.brand + " " + myCar.model;
    return 0;
}