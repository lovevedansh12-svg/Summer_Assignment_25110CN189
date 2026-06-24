#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, curr = "", longest = "";

    cout << "Enter a sentence/paragraph: ";
    getline(cin, str);

    int maxLength = 0;

    str += ' ';

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            curr += str[i];
        }
        else if (!curr.empty())
        {
            if (curr.length() > maxLength)
            {
                maxLength = curr.length();
                longest = curr;
            }
            else if (curr.length() == maxLength)
            {
                longest += ' ';
                longest += curr;
            }
            curr = "";
        }
    }

    cout << "Longest word(s):\n";

    for (int i = 0; i < longest.length(); i++)
    {
        if (longest[i] == ' ')
            cout << endl;
        else
            cout << longest[i];
    }

    return 0;
}