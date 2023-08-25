#include <bits/stdc++.h>
using namespace std;

class polymorphismClass{
    public:
        // Function with 1 int parameter
        void funct(int x) {
            cout << "value of x is: " << x << endl;
        }

        // Function with same name but 1 double parameter
        void funct(double x) {
            cout << "value of x is: " << x << endl;
        }

        // Function with same name but 2 int parameters
        void funct(int x, int y) {
            cout << "value of x and y is: \nx= " << x  << ", y= " << y <<endl;
        }
};

int main() {
    // creating object of polymorphismClass
    polymorphismClass obj1;

    // funct() is called with int value
    obj1.funct(10);

    // funct() is called with double value
    obj1.funct(10.10);

    // funct() is called with 2 int value
    obj1.funct(10,100);

    return 0;
}