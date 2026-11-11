#include <iostream>
template <typename T>
void swapVals(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}


template <typename T>
T findMax(T arr[], int n) {
    T maxVal = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    
    int x = 10, y = 20;
    int intArr[] = {3, 7, 2, 9, 5};
    
    std::cout << "--- Testing with int ---\n";
    std::cout << "Before swap: x = " << x << ", y = " << y << "\n";
    swapVals(x, y);
    std::cout << "After swap:  x = " << x << ", y = " << y << "\n";
    std::cout << "Max in int array: " << findMax(intArr, 5) << "\n\n";

    
    double da = 5.5, db = 12.3;
    double doubleArr[] = {1.1, 4.4, 9.9, 2.2, 7.7};
    
    std::cout << "--- Testing with double ---\n";
    std::cout << "Before swap: da = " << da << ", db = " << db << "\n";
    swapVals(da, db);
    std::cout << "After swap:  da = " << da << ", db = " << db << "\n";
    std::cout << "Max in double array: " << findMax(doubleArr, 5) << "\n";

    return 0;
}