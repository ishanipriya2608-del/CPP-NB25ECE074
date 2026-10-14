#include <iostream>
#include <stdexcept>

class SafeArray {
private:
    int* data;
    size_t size;

public:
    SafeArray(size_t n) : size(n) {
        data = new int[size]{0}; 
    }

    
    ~SafeArray() {
        delete[] data;
    }


    int& operator[](size_t index) {
        if (index >= size) {
            throw std::out_of_range("Array index out of bounds error!");
        }
        return data[index];
    }

    size_t getSize() const { return size; }
};

int main() {
    try {
        SafeArray arr(5);
        

        for (size_t i = 0; i < arr.getSize(); ++i) {
            arr[i] = (i + 1) * 10;
        }

        std::cout << "Element at index 2: " << arr[2] << std::endl;

        
        std::cout << "Attempting to access index 10..." << std::endl;
        std::cout << arr[10] << std::endl;

    } catch (const std::out_of_range& e) {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }

    return 0;
}