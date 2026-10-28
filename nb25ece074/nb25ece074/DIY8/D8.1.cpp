#include <iostream>
using namespace std;

class Account {
public:
    virtual double calculateInterest(double amount) = 0;
    virtual ~Account() {}
};

class Savings : public Account {
public:
    double calculateInterest(double amount) override {
        return amount * 0.05;
    }
};

class Current : public Account {
public:
    double calculateInterest(double amount) override {
        return amount * 0.02;
    }
};

int main() {
    Savings s;
    Current c;

    Account* accounts[2] = {&s, &c};
    double amount = 10000;

    cout << "Amount: " << amount << endl;

    cout << "Savings Interest: Rs. "
         << accounts[0]->calculateInterest(amount) << endl;

    cout << "Current Interest: Rs. "
         << accounts[1]->calculateInterest(amount) << endl;

    return 0;
}