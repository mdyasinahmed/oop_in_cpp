#include <bits/stdc++.h>
using namespace std;

template <typename Temp>
Temp sum(Temp a, Temp b) {
    return a + b;
}

int main() {
    int intSum = sum(5, 10);
    double doubleSum = sum(10.8, 5.6);

    cout << intSum << endl;
    cout << doubleSum << endl;

    return 0;
}