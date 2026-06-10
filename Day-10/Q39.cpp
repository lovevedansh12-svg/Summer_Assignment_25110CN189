/* Print number pyramid
     1
    121
   12321
  1234321
 123454321
........... */

#include <iostream>
using namespace std;

int main()
{
    int height;

    cout << "Enter height of pattern: ";
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        for (int j = i; j < height; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j <= i)
                cout << j;
            else
                cout << 2 * i - j;
        }

        cout << endl;
    }
    return 0;
}