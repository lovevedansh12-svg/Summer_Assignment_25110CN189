// Remove spaces from string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    int j = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }
    str.resize(j);

    cout << "String without spaces: " << str;

    return 0;
}