#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    

    int totalProduct = accumulate(nums.begin(), nums.end(), 1, [](int acc, int current) {
        return acc * current;
    });
    
    
    int evenSum = accumulate(nums.begin(), nums.end(), 0, [](int acc, int current) {
        return (current % 2 == 0) ? acc + current : acc;
    });
    
    
    cout << "Product of all elements: " << totalProduct << endl;
    cout << "Sum of even elements only: " << evenSum << endl;
    
    return 0;
}