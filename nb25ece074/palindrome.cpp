#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;

    cout << "Enter the word: ";
    cin >> s;

    cout << "The word is: " << s << endl;

    cout << "Uppercase: ";
    for (char c : s) {
        cout << (char)toupper(c);
    }
    cout << endl;

    size_t i = 0;
    size_t j = s.size() - 1;

    for (i = 0; i < j; i++, j--) {
        if (s[i] != s[j]) {
            cout << s << " is not a palindrome." << endl;
            break;
        }
    }

    if (i >= j) {
        cout << s << " is a palindrome." << endl;
    }

    size_t pos = s.find("ad");

    if (pos != string::npos) {
        cout << "Substring is found in the given string: " << s << endl;
        cout << "Position: " << pos << endl;
    } else {
        cout << "Substring is not found in the given string: " << s << endl;
    }

    return 0;
}