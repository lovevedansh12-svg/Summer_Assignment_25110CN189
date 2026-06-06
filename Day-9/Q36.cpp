/* Print hollow square
pattern
* * * * *
*       *
*       *
*       *
* * * * * */

#include <iostream>
using namespace std;

int main()
{
    int height;

    cout << "Enter length of sides of square: ";
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height; j++)
        {
            if (i == 1 or i == height or j == 1 or j == height)
                cout << "* ";

            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}