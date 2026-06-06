// Recursive sum of digits

#include <iostream>
using namespace std;

int sumOfDig(int n)
{
    if (n == 0)
        return 0;
    else
        return n % 10 + sumOfDig(n / 10);
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "The sum of digits is: " << sumOfDig(num);

    return 0;
}