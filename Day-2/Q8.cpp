#include <iostream>
using namespace std;
int main()
{
    int num, temp, rvrs = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    while (temp)
    {
        rvrs *= 10;
        rvrs += temp % 10;
        temp /= 10;
    }
    if (rvrs == num)
        cout << "It's a PALINDROME!!!";
    else
        cout << "Not a PALINDROME!!!";
    return 0;
}