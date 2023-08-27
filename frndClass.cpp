#include <bits/stdc++.h>
using namespace std;

class frndClass {
    private:
        int m_data;
    public:
        friend class MyFriendClass;
};

class MyFriendClass {
    public:
        void print_private_data(frndClass& obj) {
            cout << obj.m_data << endl;
        }
};