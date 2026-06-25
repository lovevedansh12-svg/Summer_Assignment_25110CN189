// Find common characters in strings

#include <iostream>
#include <string>
using namespace std;

void commonChar(int freqResult[])
{
    string str = "";
    int freqStr[256] = {0};

    cout << "Enter next string: ";
    getline(cin >> ws, str);

    for (char ch : str)
        freqStr[ch] = 1;

    for (int i = 0; i < 256; i++)
        freqResult[i] = freqResult[i] && freqStr[i];

    char choice;

    cout << "If you have more strings, press 0.\nPress any other key to compute result.\n->";
    cin >> choice;

    if (choice == '0')
    {
        commonChar(freqResult);
        return;
    }
    else
    {
        cout << "The common charecters in the given strings are:\n";

        for (int i = 0; i < 256; i++)
        {
            if (freqResult[i] == 1)
                cout << char(i) << endl;
        }
        return;
    }
}
int main()
{
    string str;
    int freqStr[256] = {0};

    cout << "Enter first string: ";
    getline(cin >> ws, str);

    for (char ch : str)
        freqStr[ch] = 1;

    commonChar(freqStr);

    return 0;
}