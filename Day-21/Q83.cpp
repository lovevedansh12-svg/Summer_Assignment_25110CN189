//  Count vowels and consonants

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int vowCount = 0, conCount = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowCount++;

        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            conCount++;
    }
    cout << "No. of vowels: " << vowCount << "\nNo. of consonants: " << conCount;

    return 0;
}