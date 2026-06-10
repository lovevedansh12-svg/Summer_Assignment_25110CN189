/* Print reverse pyramid
...........
 *********
  *******
   *****
    ***
     * */

#include <iostream>
using namespace std;

int main()
{
    int height;

    cout << "Enter height of pattern: ";
    cin >> height;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";

        for (int j = 2 * i + 1; j <= 2 * height - 1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}