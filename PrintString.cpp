#include <bits/stdc++.h>
using namespace std;

class PrintString {
    public:
        void print(string str) {
            cout << str;
        }
};

int main() {
    PrintString print_string; // creating object
    print_string.print("Hello WOrld!");
}