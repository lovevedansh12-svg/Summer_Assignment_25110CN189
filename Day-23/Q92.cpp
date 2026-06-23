// Find maximum occurring character

#include <iostream>
using namespace std;

int main()
{
    string str, maxChar;
    int count, maxCount = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length();)
    {
        count = 1;
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                int temp = str[j];
                str[j] = str[i + count];
                str[i + count] = temp;
                count++;
            }
        }
        if (count > maxCount)
        {
            maxChar = "";
            maxCount = count;
        }
        if (count == maxCount)
            maxChar += str[i];

        i += count;
    }
    cout << "The charecter(s) with maximum occrrence i.e. " << maxCount << " is/are: \n";

    for (char ch : maxChar)
        cout << ch << endl;

    return 0;
}