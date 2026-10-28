#include <iostream>
using namespace std;

class Person {
public:
    string name;

    Person(string n) {
        name = n;
        cout << "Person constructor called" << endl;
    }
};

class Student : virtual public Person {
public:
    Student(string n) : Person(n) {
        cout << "Student constructor called" << endl;
    }
};

class Employee : virtual public Person {
public:
    Employee(string n) : Person(n) {
        cout << "Employee constructor called" << endl;
    }
};

class TA : public Student, public Employee {
public:
    TA(string n) : Person(n), Student(n), Employee(n) {
        cout << "TA constructor called" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    TA t("Ananya");
    t.display();

    return 0;
}