// Check Armstrong number

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, temp, count = 0, result = 0;
    cout << "Enter the number: ";
    cin >> num;
    temp = num;
    while (temp)
    {
        temp /= 10;
        count++;
    }
    temp = num;
    while (temp)
    {
        result += pow(temp % 10, count);
        temp /= 10;
    }
    if (result == num)
        cout << "ARMSTRONG NUMBER!!!";
    else
        cout << "NOT AN ARMSTRONG NUMBER!!!";
    return 0;
}