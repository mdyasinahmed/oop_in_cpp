#include <bits/stdc++.h>
using namespace std;

class friendClass{
    private:
        int m_data;
    
    public:
        friend void print_private_data(friendClass& obj);
};

void print_private_data(friendClass& obj) {
    cout << obj.m_data << endl;
}