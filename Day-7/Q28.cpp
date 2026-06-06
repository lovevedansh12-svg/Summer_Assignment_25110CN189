// Recursive reverse number

#include <iostream>
using namespace std;

int reverseNum(int n, int rev = 0)
{
    if (n == 0)
        return rev;
    else
        return reverseNum(n / 10, rev * 10 + (n % 10));
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "The reversed number: " << reverseNum(num);

    return 0;
}