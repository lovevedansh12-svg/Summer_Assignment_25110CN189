// Convert binary to decimal

#include <iostream>
using namespace std;

int main()
{
    long long num, digit, result = 0, i = 1;

    cout << "Enter the number: ";
    cin >> num;

    while (num)
    {
        digit = num % 10;

        if (digit == 0 or digit == 1)
        {
            result += digit * i;
            num /= 10;
            i *= 2;
        }
        else
        {
            cout << "Input is not a binary number!!!";
            return 0;
        }
    }
    cout << "The decimal equivalent is: " << result;
    return 0;
}