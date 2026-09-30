#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int capacity;
    int top;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;

        cout << "Stack created" << endl;
    }

    
    void push(int value) {
        if (top == capacity - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }

        arr[++top] = value;
        cout << value << " pushed" << endl;
    }

    
    int pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return -1;
        }

        return arr[top--];
    }

    
    void display() {
        cout << "Stack: ";

        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";

        cout << endl;
    }

    
    
    ~Stack() {
        delete[] arr;
        cout << "Stack destroyed, buffer released" << endl;
    }
};

int main() {
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Popped: " << s.pop() << endl;

    s.display();

    return 0;
}