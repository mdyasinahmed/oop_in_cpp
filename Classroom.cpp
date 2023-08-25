#include <bits/stdc++.h>
using namespace std;

class Classroom {
    public:
    string name;
    vector<string> students;

    void displayStudents(){
        cout << "Classroom: " << name<< endl;
        for (auto student : students) {
            cout<< "Student: " << student << endl;
        }
    }

    void addStudent(string studentName) {
        students.push_back(studentName);
    }
};

int main() {
    Classroom classroom; // Create an object
    classroom.name = "Class XL-1";
    classroom.addStudent("Yasin");
    classroom.addStudent("Ahmed");
    classroom.addStudent("Mahi");
    classroom.displayStudents();

    return 0;
}