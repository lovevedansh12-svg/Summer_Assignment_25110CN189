// Write function for palindrome

#include <iostream>
using namespace std;

int pdrome(int n, int rev = 0)
{
    if (n == 0)
        return rev;

    else
        return pdrome(n / 10, rev * 10 + n % 10);
}
int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (pdrome(num) == num)
        cout << "IT'S A PALINDROME!!!";

    else
        cout << "NOT A PALINDROME!!!";

    return 0;
}