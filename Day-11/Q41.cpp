// Write function to find sum of two numbers

#include <iostream>
using namespace std;

float sumOfTwoNum(float a, float b)
{
    return a + b;
}
int main()
{
    float num1, num2;

    cout << "Enter two nos.: ";
    cin >> num1 >> num2;

    cout << "Their sum: " << sumOfTwoNum(num1, num2);

    return 0;
}