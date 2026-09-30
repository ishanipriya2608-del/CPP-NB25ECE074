#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string sentence, word;
    string words[100];
    int count = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);

    while (ss >> word) {
        words[count] = word;
        count++;
    }

    cout << "Reversed sentence: ";

    for (int i = count - 1; i >= 0; i--) {
        cout << words[i] << " ";
    }

    return 0;
}