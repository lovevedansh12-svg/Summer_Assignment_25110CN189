// Compress a string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, cmprsStr;

    cout << "Enter a string: ";
    getline(cin, str);

    if (str.empty())
    {
        cout << "Empty string";
        return 0;
    }

    int count = 1;

    for (int i = 0; i < str.length(); i++)
    {
        if (i < str.length() - 1 && str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            cmprsStr += str[i];
            cmprsStr += to_string(count);
            count = 1;
        }
    }
    cout << "Compressed string: " << cmprsStr;

    return 0;
}