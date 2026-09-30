#include <iostream>
using namespace std;

void swap(int* x, int* y) {
    int t = *x;
    *x = *y;
    *y = t;
    
}

int main() {
    int a = 10, b = 20;
    cout << "Before swapping: a=" << a << " b=" << b << endl;
    swap(&a, &b);
    cout << "After swapping: a=" << a << " b=" << b << endl;
}





