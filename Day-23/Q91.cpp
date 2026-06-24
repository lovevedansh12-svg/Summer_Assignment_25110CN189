// Check anagram strings

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length())
    {
        cout << "The strings are of different lengths";
        return 0;
    }
    int length = str1.length();

    for (int i = 0; i < length; i++)
    {
        bool charFound = false;

        for (int j = i; j < length; j++)
        {
            if (str1[i] == str2[j])
            {
                int temp = str2[j];
                str2[j] = str2[i];
                str2[i] = temp;

                charFound = true;
                break;
            }
        }
        if (!charFound)
        {
            cout << "The strings are not anagrams";
            return 0;
        }
    }
    cout << str2 << " The strings are anagrams";

    return 0;
}