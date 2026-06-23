// Find first non-repeating character

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int i = 0, j = 0;

    while (i < str.length())
    {
        if (j == str.length())
        {
            cout << "First non-repeating charecter: " << str[i];
            return 0;
        }
        if (str[j] == str[i] && j != i)
        {
            i++;
            j = 0;
        }
        else
            j++;
    }
    cout << "No non-repeating character found";

    return 0;
}