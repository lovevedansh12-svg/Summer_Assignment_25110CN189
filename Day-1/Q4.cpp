// Count digits in a number

#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter a number : ";
    cin >> n;
    while (n)
    {
        n = n / 10;
        count++;
    }
    cout << "The no. of the digits in the given no. is " << count;
    return 0;
}