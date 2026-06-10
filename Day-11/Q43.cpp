// Write function to check prime

#include <iostream>
using namespace std;

int checkPrime(int x, int i = 2)
{
    if (x <= 1)
        return -1;

    if (i > x / i)
        return 1;

    if (x % i == 0)
        return 0;

    return checkPrime(x, i + 1);
}
int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = checkPrime(num);

    if (result == 1)
        cout << "PRIME NO.!!!";

    else if (result == 0)
        cout << "NOT PRIME!!!";

    else
        cout << "Number should be greater than 1";

    return 0;
}