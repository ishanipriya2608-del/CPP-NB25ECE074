#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s = "Verification";

    cout << "First 4: " << s.substr(0, 4) << endl;
    cout << "From 4: " << s.substr(4) << endl;

    int c = s.compare("Verification");
    cout << "Compare vs Verification: " << c << endl;

    for (char ch : s)
    {
        if (isalpha((unsigned char)ch))
            cout << ch << " ";
    }

    cout << endl;

    cout << "Letter count: ";
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (isalpha((unsigned char)s[i]))
            cout << s[i] << " ";
    }

    cout << endl;

    return 0;
}