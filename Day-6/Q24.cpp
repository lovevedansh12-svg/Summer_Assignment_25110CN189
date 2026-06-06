// Find x^n without pow()

#include <iostream>
using namespace std;

int main()
{
    int x, n, result = 1;

    cout << "Enter base: ";
    cin >> x;
    cout << "Enter power: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        result *= x;

    cout << "The value of x^n is: " << result;

    return 0;
}