// Check strong number

#include <iostream>
using namespace std;

int main()
{
    int num, temp, fact, result = 0;

    cout << "Enter the number: ";
    cin >> num;

    temp = num;

    while (temp)
    {
        fact = 1;
        for (int i = temp % 10; i > 1; i--)
            fact *= i;

        result += fact;
        temp /= 10;
    }
    if (result == num)
        cout << "STRONG NUMBER!!!";
    else
        cout << "NOT A STRONG NUMBER!!!";

    return 0;
}