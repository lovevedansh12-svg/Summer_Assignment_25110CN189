// Find largest prime factor

#include <iostream>
using namespace std;

int main()
{
    int num, flag, lpf;

    cout << "Enter the number: ";
    cin >> num;

    if (num < 1)
        cout << "Enter a valid positive integer";

    else if (num == 1)
        cout << "1 has no prime factors";

    else
    {
        for (int i = 2; i <= num; i++)
        {
            if (num % i == 0)
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
                    lpf = i;
            }
        }
        cout << "The largest prime factor is: " << lpf;
    }
    return 0;
}