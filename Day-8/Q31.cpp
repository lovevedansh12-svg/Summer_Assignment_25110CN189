/* Print character triangle
A
AB
ABC
ABCD
ABCDE
...... */

#include <iostream>
using namespace std;

int main()
{
    int height;

    cout << "Enter height of pattern: ";
    cin >> height;

    for (int i = 65; i < height + 65; i++)
    {
        for (char ch = 65; ch <= i; ch++)
            cout << ch;

        cout << endl;
    }

    return 0;
}