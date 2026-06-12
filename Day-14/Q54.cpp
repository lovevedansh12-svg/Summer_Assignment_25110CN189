// Frequency of an element

#include <iostream>
using namespace std;

int main()
{
    int arr[64], length, target, count = 0;

    cout << "Enter length of array: ";
    cin >> length;

    cout << "Enter elements of array:\n";

    for (int i = 0; i < length; i++)
        cin >> arr[i];

    cout << "Element?: ";
    cin >> target;

    for (int i = 0; i < length; i++)
        if (arr[i] == target)
            count++;

    cout << "The element " << target << " occurs " << count << " times in the array";

    return 0;
}