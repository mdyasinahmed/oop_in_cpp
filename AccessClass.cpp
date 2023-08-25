#include <bits/stdc++.h>
using namespace std;

class MyClass {
    public:         // Public access specifier
        int x;      // Public attribute
    private:        // Private access specifier
        int y;      // Private attribute
};

int main() {
    MyClass myObj;
    myObj.x = 50;   // Allowed (public)
    cout << myObj.x;
    //myObj.y = 100;  // Not Allowed (private)

    return 0;
}