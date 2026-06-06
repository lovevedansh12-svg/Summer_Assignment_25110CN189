/* Print number triangle
1
12
123
1234
12345
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
            cout << j;

        cout << endl;
    }

    return 0;
}