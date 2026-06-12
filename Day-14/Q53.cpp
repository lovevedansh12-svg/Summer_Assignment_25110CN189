// Linear search

#include <iostream>
using namespace std;

int main()
{
    int arr[64], length, target;

    cout << "Enter length of array: ";
    cin >> length;

    cout << "Enter elements of array:\n";

    for (int i = 0; i < length; i++)
        cin >> arr[i];

    cout << "Enter target element: ";
    cin >> target;

    cout << "The element " << target << " is found at index(es): \n";

    for (int i = 0; i < length; i++)
        if (arr[i] == target)
            cout << i << endl;

    return 0;
}