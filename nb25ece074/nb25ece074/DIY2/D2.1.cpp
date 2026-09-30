#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:

    void setData(float r, float i)
    {
        real = r;
        imag = i;
    }

    void display()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main()
{
    Complex c[3];

    c[0].setData(2, 3);
    c[1].setData(4, -5);
    c[2].setData(6, 7);

    cout << "Complex Numbers:" << endl;

    c[0].display();
    c[1].display();
    c[2].display();

    return 0;
}