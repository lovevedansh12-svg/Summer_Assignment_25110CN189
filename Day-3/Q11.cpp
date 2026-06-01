// Find GCD of two numbers

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, temp;
    cout << "Enter first no.: ";
    cin >> num1;
    cout << "Enter second no.: ";
    cin >> num2;
    if (num1 < num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    while (num2 != 0)
    {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }
    cout << "The GCD of the nos. is " << num1;
    return 0;
}