// Print prime numbers in a range

#include <iostream>
using namespace std;
int main()
{
    int ll, ul, flag;
    cout << "Enter the lower limit of the range: ";
    cin >> ll;
    cout << "Enter the upper limit of the range: ";
    cin >> ul;
    for (int i = ll; i <= ul; i++)
    {
        if (i >= 2)
        {
            flag = 1;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
                cout << i << " ";
        }
    }
    return 0;
}