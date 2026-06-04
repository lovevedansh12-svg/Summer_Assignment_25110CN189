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

        // count the no. of digits
        while (temp)
        {
            temp /= 10;
            count++;
        }
        temp = num;

        // store the required no. in a variable
        while (temp)
        {
            result += pow(temp % 10, count);
            temp /= 10;
        }

        // print if the new variable matches input no.
        if (result == num)
            cout << num << " ";
    }
    return 0;
}