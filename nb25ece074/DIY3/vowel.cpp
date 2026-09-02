#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    int vowels = 0, consonants = 0;

    cout << "Enter a sentence: ";
    getline(cin, s);

    for (char ch : s) {
        ch = tolower(ch);

        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Number of vowels = " << vowels << endl;
    cout << "Number of consonants = " << consonants << endl;

    return 0;
}