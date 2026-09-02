#include <iostream>
using namespace std;

int area(int side) {
    return side * side;
}

int area(int length, int breadth) {
    return length * breadth;
}

int area (double base, double height) 
{
    return 0.5 * base * height; 
}

int main() {
    int side;

    cout << "Enter side of square:" << endl;
    cin >> side;
    cout << "Area of square: " << area(side) << endl;

    cout << "Enter length and breadth of rectangle:" << endl;
    int length, breadth;
    cin >> length >> breadth;
    cout << "Area of rectangle: " << area(length, breadth) << endl;

    cout << "Enter base and height of triangle:" << endl;
    double base, height;
    cin >> base >> height;
    cout << "Area of triangle: " << area(base, height) << endl;

    return 0;
}