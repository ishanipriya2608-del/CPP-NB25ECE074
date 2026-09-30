#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string owner;
    double balance;

public:
    
    void openAccount(string name, double initial)
    {
        owner = name;

        if (initial > 0)
            balance = initial;
        else
            balance = 0;
    }

    void deposit(double amount)
    {
        if (amount > 0)
            balance = balance + amount;
    }

    bool withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            return true;
        }

        return false;
    }

    string getOwner()
    {
        return owner;
    }

    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount account;

    string name;
    double initialDeposit;
    double depositAmount;
    double withdrawAmount;

    cout << "Enter account holder name: ";
    getline(cin, name);

    cout << "Enter initial deposit: ";
    cin >> initialDeposit;

    account.openAccount(name, initialDeposit);

    
    cout << "Enter amount to deposit: ";
    cin >> depositAmount;

    account.deposit(depositAmount);

    
    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;

    if (account.withdraw(withdrawAmount))
    {
        cout << "Withdrawal successful." << endl;
    }
    else
    {
        cout << "Withdrawal failed." << endl;
    }

    cout << "\n===== ACCOUNT DETAILS =====" << endl;
    cout << "Account Holder: " << account.getOwner() << endl;
    cout << "Final Balance: " << account.getBalance() << endl;

    return 0;
}