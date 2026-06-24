// Remove duplicate characters

#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int k = 0;

    for (int i = 0; i < str.length(); i++)
    {
        bool duplicate = false;

        for (int j = 0; j < k; j++)
        {
            if (str[i] == str[j])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            str[k] = str[i];
            k++;
        }
    }
    str.resize(k);

    cout << "Str after removing duplicates: " << str[k - 1];

    return 0;
}