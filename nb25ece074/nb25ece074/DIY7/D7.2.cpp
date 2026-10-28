#include <iostream>
using namespace std;

class Shape {
protected:
    string color;

public:
    Shape() {
        color = "Blue";
        cout << "Shape constructor called" << endl;
    }
};

class Polygon : public Shape {
protected:
    int sides;

public:
    Polygon() {
        sides = 4;
        cout << "Polygon constructor called" << endl;
    }
};

class Rectangle : public Polygon {
    int length, breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
        cout << "Rectangle constructor called" << endl;
    }

    void display() {
        cout << "Color: " << color << endl;
        cout << "Sides: " << sides << endl;
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
    }
};

int main() {
    Rectangle r(10, 5);

    cout << "\nRectangle Details:" << endl;
    r.display();

    return 0;
}