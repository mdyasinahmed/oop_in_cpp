#include <iostream>
using namespace std;

template <class T>
void print(T value) {
    cout << value << endl;
}

int main() {
    print(10); // output: 10
    print(12.34); // output: 12.34
    print("Hello, world!"); // output: Hello, world!
    
    return 0;
}
