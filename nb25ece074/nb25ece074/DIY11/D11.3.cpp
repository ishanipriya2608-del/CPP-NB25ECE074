#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>

int main() {
    
    std::string inputText = "apple banana apple cherry banana apple orange grape banana apple";
    std::stringstream ss(inputText);
    
    std::unordered_map<std::string, int> wordCounts;
    std::string word;

    
    while (ss >> word) {
        wordCounts[word]++;
    }

    std::cout << "--- Word Frequencies ---\n";
    std::string mostFrequentWord = "";
    int maxCount = 0;

    for (const auto& pair : wordCounts) {
        std::cout << pair.first << ": " << pair.second << "\n";
        
        
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostFrequentWord = pair.first;
        }
    }

    std::cout << "\n--- Most Frequent Word ---\n";
    std::cout << "Word: \"" << mostFrequentWord << "\" with a count of " << maxCount << "\n";

    return 0;
}