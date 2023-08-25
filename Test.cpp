#include <bits/stdc++.h>
using namespace std;

class Test {
    public:
        Test() {
            cout << "\n Constructor executed";
        }

        ~Test() {
            cout << "\n Destructor executed";
        }
};

/*
private:
    ~Test () {
        cout << "\n Private Destructor executed";
    }
*/

int main() {
    Test t;
    return 0;
}