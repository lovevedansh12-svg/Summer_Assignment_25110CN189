// Binary search

#include <iostream>
using namespace std;

int main()
{
    int arr[64], length;

    cout << "Enter length of array: ";
    cin >> length;

    cout << "Enter elements of the array:\n";

    for (int i = 0; i < length; i++)
        cin >> arr[i];

    // Check if array is sorted or not
    for (int i = 0; i < length - 1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            cout << "ARRAY NEEDS TO BE SORTED AND IN ASCENDING ORDER!!!";
            return 0;
        }
    }
    // Binary search algo
    int low = 0, high = length - 1, mid, target;

    cout << "Enter target element: ";
    cin >> target;

    while (low != high)
    {
        mid = (low + high) / 2;

        if (target == arr[mid])
        {
            cout << "The element " << target << " is found at index: " << mid;
            return 0;
        }
        else if (target < arr[mid])
            high = mid - 1;

        else
            low = mid + 1;
    }
    cout << "ELEMENT NOT FOUND!!!";
    return 0;
}