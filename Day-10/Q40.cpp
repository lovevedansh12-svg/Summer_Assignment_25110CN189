/* Print character pyramid
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
........... */

#include <iostream>
using namespace std;

int main()
{
    int height;

    cout << "Enter height of pattern: ";
    cin >> height;

    for (char i = 65; i < height + 65; i++)
    {
        for (char j = i; j < height + 64; j++)
            cout << " ";

        for (char j = 65; j <= 2 * i - 65; j++)
        {
            if (j <= i)
                cout << j;
            else
                cout << char(2 * i - j);
        }

        cout << endl;
    }
    return 0;
}