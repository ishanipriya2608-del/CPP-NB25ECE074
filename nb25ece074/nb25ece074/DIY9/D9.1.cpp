#include <iostream>
#include <exception>
#include <string>


class InsufficientFunds : public std::exception {
private:
    std::string message;
public:
    InsufficientFunds(double amount, double balance) {
        message = "Insufficient Funds: Attempted to withdraw $" + std::to_string(amount) + 
                  " but only $" + std::to_string(balance) + " is available.";
    }
    
    const char* what() const noexcept override {
        return message.c_str();
    }
};

class BankAccount {
private:
    double balance;
public:
    BankAccount(double initial_balance) : balance(initial_balance) {}

    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientFunds(amount, balance);
        }
        balance -= amount;
        std::cout << "Successfully withdrew $" << amount << ". Remaining balance: $" << balance << std::endl;
    }
};

int main() {
    BankAccount account(100.0);
    
    try {
        account.withdraw(40.0);
        account.withdraw(80.0);
    } 
    catch (const InsufficientFunds& e) {
        std::cout << "Caught Exception: " << e.what() << std::endl;
    }
    
    return 0;
}