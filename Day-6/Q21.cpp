// Convert decimal to binary

#include <iostream>
using namespace std;

int main()
{
    long long num, result = 0, i = 1;

    cout << "Enter the number: ";
    cin >> num;

    while (num)
    {
        result += (num % 2) * i;
        num /= 2;
        i *= 10;
    }
    cout << "The binary equivalent is: " << result;

    return 0;
}