#include <iostream>
#include <string>
using namespace std;

class Project {
public:
    string projectTitle;
    int duration;//in months

    Project(string t = "", int d = 0) {
        projectTitle = t;
        duration = d;
    }
};

class Employee {
public:
    string empName;
    double salary;
    Project* project;//Aggregation (pointer)
    static float taxRate;

    Employee(string name, double sal, Project* p) {
        empName = name;
        salary = sal;
        project = p;
    }

    static void changeTaxRate(float rate) {
        taxRate = rate;
    }

    double calculateNetSalary() const {
        return salary - (salary * taxRate / 100);
    }

    void showDetails() const {
        cout << "Employee: " << empName << endl;
        cout << "Gross Salary: " << salary << endl;
        cout << "Net Salary: " << calculateNetSalary() << endl;
        cout << "Project: " << project->projectTitle
             << " (" << project->duration << " months)" << endl;
        cout << endl;
    }
};

float Employee::taxRate = 10.0;

int main() {
    Project p1("AI System", 12);
    Project p2("Mobile App", 6);

    Employee employees[3] = {
        Employee("Nehan", 50000, &p1),
        Employee("Malik", 60000, &p2),
        Employee("Muhammad", 55000, &p1)
    };

    Employee::changeTaxRate(12.5);

    for(int i = 0; i < 3; i++) {
        employees[i].showDetails();
    }

    return 0;
}
