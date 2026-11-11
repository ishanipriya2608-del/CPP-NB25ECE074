#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    
    vector<int> numbers = {15, 3, 44, 91, 7, 62, 50, 12};
    
    
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    for (int num : numbers) {
        minHeap.push(num);
    
        if (minHeap.size() > 3) {
            minHeap.pop(); 
        }
    }
    
    
    cout << "The 3 largest numbers are: ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;
    
    return 0;
}