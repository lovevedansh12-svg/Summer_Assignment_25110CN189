// Check perfect number

#include <iostream>
using namespace std;

int main()
{
    int num, result;

    cout << "Enter the number: ";
    cin >> num;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            result += i;
    }
    if (result == num)
        cout << "PERFECT NUMBER!!!";
    else
        cout << "NOT A PERFECT NUMBER!!!";

    return 0;
}