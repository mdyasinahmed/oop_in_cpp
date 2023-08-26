#include <bits/stdc++.h>
using namespace std;

// Abstraction base class
class Shape {
    public:
        virtual void draw() = 0;
};

// Concrete derived class
class Circle : public Shape {
    public:
        void draw() {
            cout << "Drawing a Circle." << endl;
        }
};

// main function
int main() {
    Circle circle;
    circle.draw();

    return 0;
}