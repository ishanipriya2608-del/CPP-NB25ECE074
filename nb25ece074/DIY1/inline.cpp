#include <iostream>
using namespace std;


inline int minVal(int a, int b)
{
    return (a < b) ? a : b;
}


inline int minVal(int a, int b, int c)
{
    return minVal(minVal(a, b), c);
}

int main()
{
    cout << "Minimum of 2 numbers = " << minVal(10, 5) << endl;
    cout << "Minimum of 3 numbers = " << minVal(10, 5, 8) << endl;

    return 0;
}