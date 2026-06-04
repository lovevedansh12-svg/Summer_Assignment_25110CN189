// Print Armstrong numbers in a range

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int ll, ul, temp, count, result;
    cout << "Enter the lower limit of the range: ";
    cin >> ll;
    cout << "Enter the upper limit of the range: ";
    cin >> ul;
    for (int num = ll; num <= ul; num++)
    {
        count = 0;
        result = 0;
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
            cout << num << " ";
    }
    return 0;
}