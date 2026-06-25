// Sort words by length

#include <iostream>
using namespace std;

int main()
{
    string name = "";
    string sortedNames[64] = {""};
    int nameCount = 0;
    char choice = '0';

    while (choice == '0')
    {
        nameCount++;

        cout << "Enter name of person " << nameCount << ": ";
        cin >> name;

        sortedNames[nameCount - 1] = name;

        cout << "More names?\nPress '0' to enter more.\nPress any other key to get sorted names by length.\n->";
        cin >> choice;
    }
    for (int i = 1; i < nameCount; i++)
    {
        string key = sortedNames[i];
        int j = i - 1;

        while (j >= 0 && (sortedNames[j].length() > key.length() || (sortedNames[j].length() == key.length() && sortedNames[j] > key)))
        {
            sortedNames[j + 1] = sortedNames[j];
            j--;
        }
        sortedNames[j + 1] = key;
    }
    for (int i = 0; i < nameCount; i++)
    {
        cout << sortedNames[i] << endl;
    }
    return 0;
}