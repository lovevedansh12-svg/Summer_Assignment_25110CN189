// Count words in a sentence

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int wordCount = 0;
    bool insideWord = false;

    cout << "Enter a sentence: ";
    getline(cin, str);

    for (char ch : str)
    {
        if (ch != ' ' && !insideWord)
        {
            wordCount++;
            insideWord = true;
        }
        else if (ch == ' ')
            insideWord = false;
    }
    cout << "No. of words: " << wordCount;

    return 0;
}
