#include <iostream>
#include <string>
using namespace std;

class Department {
public:
    string name;
    string code;
};

class Student {
public:
    string name;
    int age;
    Department dept;
};

int main() {
    Student students[3];

    for(int i = 0; i < 3; i++) {
        cout << "Enter student " << i + 1 << " name: ";
        getline(cin, students[i].name);

        cout << "Enter age: ";
        cin >> students[i].age;
        cin.ignore();

        cout << "Enter department name: ";
        getline(cin, students[i].dept.name);

        cout << "Enter department code: ";
        getline(cin, students[i].dept.code);

        cout << endl;
    }

    cout << "Student Details:\n\n";
    for(int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Department: " << students[i].dept.name << endl;
        cout << "Code: " << students[i].dept.code << endl;
        cout << endl;
    }

    return 0;
}
