#include <iostream>
#include <exception>
class MathError : public std::exception {
public:
    const char* what() const noexcept override {
        return "General Math Error";
    }
};


class DivideByZero : public MathError {
public:
    const char* what() const noexcept override {
        return "Divide By Zero Error";
    }
};

void divide(int b) {
    if (b == 0) throw DivideByZero();
}

void demonstrateHiding() {
    try {
        divide(0);
    } 
    catch (const MathError& e) {
        std::cout << "Caught by MathError (Base) handler!" << std::endl;
        std::cout << "Message: " << e.what() << std::endl;
    }
}


void demonstrateCorrectOrder() {
    try {
        divide(0);
    } 
    catch (const DivideByZero& e) {
        std::cout << "Caught by specific DivideByZero (Derived) handler!" << std::endl;
        std::cout << "Message: " << e.what() << std::endl;
    } 
    catch (const MathError& e) {
        std::cout << "Caught by MathError (Base) handler!" << std::endl;
        std::cout << "Message: " << e.what() << std::endl;
    }
}

int main() {
    std::cout << "=== Demo 1: How Base Catching Hides Specific Types ===" << std::endl;
    demonstrateHiding();

    std::cout << "\n=== Demo 2: Correctly Ordered Handlers ===" << std::endl;
    demonstrateCorrectOrder();

    return 0;
}