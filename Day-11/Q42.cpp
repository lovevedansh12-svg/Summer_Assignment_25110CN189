// Write function to find maximum

#include <iostream>
using namespace std;

float maxNum(float a, float b)
{
    return a > b ? a : b;
}
int main()
{
    float num1, num2;

    cout << "Enter two nos.: \n";
    cin >> num1 >> num2;

    cout << "Maximum is: " << maxNum(num1, num2);

    return 0;
}