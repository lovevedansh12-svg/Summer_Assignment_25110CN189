// Find LCM of two numbers

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, temp, max;
    cout << "Enter first no.: ";
    cin >> num1;
    cout << "Enter second no.: ";
    cin >> num2;
    (num1 > num2) ? max = num1 : max = num2;
    while (1)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            cout << "The LCM of the nos. is: " << max;
            break;
        }
        max++;
    }
    return 0;
}