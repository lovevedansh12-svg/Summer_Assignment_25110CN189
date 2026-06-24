// Check string rotation

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1.length() != str2.length())
    {
        cout << "The strings are of different lengths";
        return 0;
    }
    int length = str1.length();

    string str1Doubled = str1 + str1;

    for (int i = 0; i < length; i++)
    {
        if (str1Doubled.substr(i, length) == str2)
        {
            cout << "Second string is formed by rotating first string left by " << i << " places";
            return 0;
        }
    }
    cout << "The string is not formed by rotation or the string is different.";

    return 0;
}