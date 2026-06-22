// Check palindrome string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int length;

    cout << "Enter a string: ";
    cin >> str;

    length = str.length();

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            cout << "\"" << str << "\" is not a palindrome string.";
            return 0;
        }
    }
    cout << "\"" << str << "\" is a palindrome string.";

    return 0;
}