// Reverse a string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int length;
    char temp;

    cout << "Enter a string: ";
    getline(cin, str);

    length = str.length();

    for (int i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    cout << "After reverse: " << str;

    return 0;
}