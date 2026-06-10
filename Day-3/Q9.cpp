// Check whether a number is prime

#include <iostream>
using namespace std;
int main()
{
    int num, flag = 1;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 2)
        cout << num << " is neither prime nor composite";
    else
    {
        for (int i = 2; i <= num / i; i++)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << num << " is a prime number";
        else
            cout << num << " is a composite number";
    }
    return 0;
}