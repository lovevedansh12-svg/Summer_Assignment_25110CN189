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

    // check if the new variable matches input no.
    if (result == num)
        cout << "ARMSTRONG NUMBER!!!";
    else
        cout << "NOT AN ARMSTRONG NUMBER!!!";
    
    return 0;
}