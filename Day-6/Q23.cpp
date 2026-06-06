// Count set bits in a number

#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;

    cout << "Enter the number: ";
    cin >> num;

    while (num)
    {
        count += (num & 1);
        num >>= 1;
    }
    cout << "Total set bits: " << count;

    return 0;
}