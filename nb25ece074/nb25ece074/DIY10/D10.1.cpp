#include <iostream>
#include <fstream>
#include <climits>

int main() {
    std::ifstream inFile("nums.txt");
    if (!inFile) {
        std::cerr << "Error: Could not open nums.txt" << std::endl;
        return 1;
    }

    int num;
    int count = 0;
    long long sum = 0;
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    while (inFile >> num) {
        count++;
        sum += num;
        if (num < minVal) minVal = num;
        if (num > maxVal) maxVal = num;
    }

    inFile.close();

    if (count == 0) {
        std::cout << "The file is empty or contains no valid integers." << std::endl;
    } else {
        std::cout << "Count: " << count << std::endl;
        std::cout << "Sum  : " << sum << std::endl;
        std::cout << "Min  : " << minVal << std::endl;
        std::cout << "Max  : " << maxVal << std::endl;
    }

    return 0;
}