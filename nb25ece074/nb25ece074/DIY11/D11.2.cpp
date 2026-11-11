#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

template <typename T>
class Queue {
private:
    std::vector<T> elements;

public:
    
    void enqueue(const T& item) {
        elements.push_back(item);
    }

    
    void dequeue() {
        if (elements.empty()) {
            throw std::underflow_error("Queue is empty! Cannot dequeue.");
        }
        elements.erase(elements.begin());
    }

    
    T front() const {
        if (elements.empty()) {
            throw std::underflow_error("Queue is empty! No front element.");
        }
        return elements[0];
    }

    
    bool empty() const {
        return elements.empty();
    }
};

int main() {
    Queue<std::string> stringQueue;

    std::cout << "--- Testing Queue with string ---\n";
    
    
    std::cout << "Enqueueing: Apple, Banana, Cherry\n";
    stringQueue.enqueue("Apple");
    stringQueue.enqueue("Banana");
    stringQueue.enqueue("Cherry");

    
    std::cout << "Front element: " << stringQueue.front() << "\n";
    
    std::cout << "Dequeuing...\n";
    stringQueue.dequeue();
    std::cout << "Front element: " << stringQueue.front() << "\n";

    std::cout << "Dequeuing...\n";
    stringQueue.dequeue();
    std::cout << "Front element: " << stringQueue.front() << "\n";

    return 0;
}