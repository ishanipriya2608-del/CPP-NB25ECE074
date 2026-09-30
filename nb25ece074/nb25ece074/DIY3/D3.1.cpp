#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string word1, word2;

    cout << "Enter first word: ";
    cin >> word1;

    cout << "Enter second word: ";
    cin >> word2;

    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    if (word1 == word2)
        cout << "The words are anagrams.";
    else
        cout << "The words are not anagrams.";

    return 0;
}