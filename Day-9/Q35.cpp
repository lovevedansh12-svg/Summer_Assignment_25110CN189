/* Print repeated character pattern
A
BB
CCC
DDDD
EEEEE
...... */

#include <iostream>
using namespace std;

int main()
{
    int height;

    cout << "Enter height of pattern: ";
    cin >> height;

    for (char ch = 65; ch < height + 65; ch++)
    {
        for (int j = 65; j <= ch; j++)
            cout << ch;

        cout << endl;
    }

    return 0;
}