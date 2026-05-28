#include <iostream>
using namespace std;
int main()
{
    int n, x = 1;
    cout << "Please enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        x *= i;
    cout << "The factorial of " << n << " is " << x;
}