#include <iostream>
using namespace std;

class Base {
public:
    ~Base() {
        cout << "Base destructor called" << endl;
    }
};

class Derived : public Base {
private:
    int* ptr;

public:
    Derived() {
        ptr = new int[100];
        cout << "Memory allocated" << endl;
    }

    ~Derived() {
        delete[] ptr;
        cout << "Derived destructor called" << endl;
    }
};

int main() {
    Base* obj = new Derived();

    delete obj;

    return 0;
}