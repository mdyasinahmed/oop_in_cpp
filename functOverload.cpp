#include <bits/stdc++.h>
using namespace std;

void add(int a, int b) {
    cout << "Sum = " << (a + b) <<endl;
}

void add(double a, double b) {
    cout << "Sum = " << (a + b) <<endl;
}

int main() {
    add(10, 10);
    add(10.10, 10.10);

    return 0;
}