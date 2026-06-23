#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int i = 0, j = 1;

    while (i < str.length() - 1)
    {
        if (j == str.length())
        {
            i++;
            j = i + 1;
        }
        if (str[j] == str[i])
        {
            cout << "First repeating charecter: " << str[i];
            return 0;
        }
        else
            j++;
    }
    cout << "No repeating character found";

    return 0;
}