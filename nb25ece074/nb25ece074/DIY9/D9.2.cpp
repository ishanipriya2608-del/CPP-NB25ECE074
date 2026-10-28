#include <iostream>
#include <exception>

class Overflow : public std::exception {
public:
    const char* what() const noexcept override {
        return "Stack Overflow: Cannot push to a full stack!";
    }
};

class Underflow : public std::exception {
public:
    const char* what() const noexcept override {
        return "Stack Underflow: Cannot pop from an empty stack!";
    }
};

class Stack {
private:
    static const int MAX_SIZE = 3;
    int arr[MAX_SIZE];
    int topIndex;
public:
    Stack() : topIndex(-1) {}

    void push(int val) {
        if (topIndex >= MAX_SIZE - 1) {
            throw Overflow();
        }
        arr[++topIndex] = val;
        std::cout << "Pushed: " << val << std::endl;
    }

    int pop() {
        if (topIndex < 0) {
            throw Underflow();
        }
        return arr[topIndex--];
    }
};

int main() {
    Stack s;

    try {
        std::cout << "--- Testing Overflow ---" << std::endl;
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40); 
    } 
    catch (const Overflow& e) {
        std::cout << "Handled: " << e.what() << std::endl;
    }

    
    try {
        std::cout << "\n--- Testing Underflow ---" << std::endl;
        std::cout << "Popped: " << s.pop() << std::endl;
        std::cout << "Popped: " << s.pop() << std::endl;
        std::cout << "Popped: " << s.pop() << std::endl;
        std::cout << "Popped: " << s.pop() << std::endl; 
    } 
    catch (const Underflow& e) {
        std::cout << "Handled: " << e.what() << std::endl;
    }

    return 0;
}