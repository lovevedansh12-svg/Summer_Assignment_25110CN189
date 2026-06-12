// Write function for Armstrong

#include <iostream>
using namespace std;

int digitCount(int n, int Count = 0)
{
    if (n == 0)
        return Count;

    else
        return digitCount(n / 10, Count + 1);
}

int digExpo(int n, int pwr)
{
    if (pwr == 0)
        return 1;

    else
        return n * digExpo(n, pwr - 1);
}

int astrong(int n, int Count, int check = 0)
{
    if (n == 0)
        return check;

    else
        return astrong(n / 10, check + digExpo(n % 10, Count));
}

int main()
{
    int num, count;

    cout << "Enter a number: ";
    cin >> num;

    count = digitCount(num);

    if (astrong(num, count) == num)
        cout << "ARMSTRONG NUMBER!!!";

    else
        cout << "NOT AN ARMSTRONG NO.!!!";

    return 0;
}