#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    vector<pair<string, int>> students = {
        {"Alice", 85},
        {"Bob", 72},
        {"Charlie", 95},
        {"Diana", 64}
    };
    
    
    sort(students.begin(), students.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second < b.second;
    });
    
    
    cout << "Sorted pairs (ascending by value):" << endl;
    for (const auto& student : students) {
        cout << student.first << ": " << student.second << endl;
    }
    
    return 0;
}