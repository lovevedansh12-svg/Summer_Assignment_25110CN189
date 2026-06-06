/* Print reverse number triangle
......
12345
1234
123
12
1 */

#include <iostream>
using namespace std;

int main()
{
    int height;

    cout << "Enter height of pattern: ";
    cin >> height;

    for (int i = 0; i < height; i++)
    {
        for (int j = 1; i + j <= height; j++)
            cout << j;

        cout << endl;
    }

    return 0;
}
