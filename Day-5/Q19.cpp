// Print factors of a number

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    cout << "The factors of the number are: ";

    for (int i = 1; i <= num; i++)
    {

        if (num % i == 0)
            cout << i << " ";
    }
    return 0;
}