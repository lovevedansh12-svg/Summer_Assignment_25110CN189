// Reverse array

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

    cout << "before reverse:\n";
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";

    for (int i = 0; i < length / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
    cout << "\nafter reverse:\n";
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";

    return 0;
}