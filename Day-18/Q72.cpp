// Sort array in descending order

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

    cout << "before sorting:\n";

    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";

    // Using insertion sort
    for (int i = 1; i < length; i++)
    {
        int key = arr[i], j = i - 1;

        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
    cout << "\nafter sorting (descending order):\n";

    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";

    return 0;
}