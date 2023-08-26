#include <bits/stdc++.h>
using namespace std;

class Person {
    private:
        string name;
        int age;
    
    public:
        // setter method for name and age
        void set(string newName, int newAge) {
            name = newName;
            age = newAge;
        }

        // getter method for name
        string getName() const {
            return name;
        }

        // getter method for age
        int getAge() const {
            return age;
        }
};

int main() {
    Person person;
    person.set("Yasin Ahmed", 20);

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    return 0;
}