#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b, sum;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    sum = add(a, b);

    cout << "Sum is: " << sum << endl;

    return 0;
}