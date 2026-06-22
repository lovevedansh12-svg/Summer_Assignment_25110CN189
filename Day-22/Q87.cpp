//  Character frequency

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int charCount, length;
    bool alreadyCounted;

    cout << "Enter a string: ";
    getline(cin, str);

    length = str.length();

    for (int i = 0; i < length; i++)
    {
        alreadyCounted = false;
        charCount = 0;

        for (int j = 0; j < i; j++)
        {
            if (str[j] == str[i])
            {
                alreadyCounted = true;
                break;
            }
        }
        if (!alreadyCounted)
        {
            for (int j = i; j < length; j++)
                if (str[j] == str[i])
                    charCount++;

            cout << "\"" << str[i] << "\" occurs " << charCount << " times\n";
        }
    }
    return 0;
}
