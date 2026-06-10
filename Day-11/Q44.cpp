// Write function to find factorial

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0 or n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
        cout << "Number should be non-negative";

    else
        cout << "Factorial is: " << fact(num);

    return 0;
}