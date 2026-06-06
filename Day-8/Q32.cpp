/* Print repeated-number pattern
1
22
333
4444
55555
...... */

#include <iostream>
using namespace std;

int main()
{
    int height;

    cout << "Enter height of pattern: ";
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << i;

        cout << endl;
    }

    return 0;
}