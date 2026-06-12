// Write function for perfect number

#include <iostream>
using namespace std;

int perfectNum(int n, int i = 1)
{
    if (i > n / 2)
        return 0;

    else if (n % i == 0)
        return i + perfectNum(n, i + 1);

    else
        return perfectNum(n, i + 1);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (perfectNum(num) == num)
        cout << "PERFECT NUMBER!!!";

    else
        cout << "NOT A PERFECT NUMBER!!!";

    return 0;
}