#include <iostream>
#include <cmath>

class Money {
private:
    long long rupees;
    int paise;

    void normalize() {
        
        if (paise >= 100) {
            rupees += paise / 100;
            paise %= 100;
        } else if (paise < 0) {
            long long borrow = (abs(paise) + 99) / 100;
            rupees -= borrow;
            paise += borrow * 100;
        }
    }

public:
    Money(long long r = 0, int p = 0) : rupees(r), paise(p) {
        normalize();
    }

    
    Money operator+(const Money& other) const {
        return Money(rupees + other.rupees, paise + other.paise);
    }

    
    Money operator-(const Money& other) const {
        return Money(rupees - other.rupees, paise - other.paise);
    }

    void display() const {
        std::cout << "Rs. " << rupees << "." << (paise < 10 ? "0" : "") << paise << std::endl;
    }
};

int main() {
    Money m1(50, 75);
    Money m2(20, 50);

    std::cout << "Amount 1: "; m1.display();
    std::cout << "Amount 2: "; m2.display();

    Money sum = m1 + m2;
    std::cout << "Sum (+): "; sum.display();

    Money diff = m1 - m2;
    std::cout << "Difference (-): "; diff.display();

    return 0;
}
