// Rotate array right

#include <iostream>
using namespace std;

int main()
{
    int arr[64], length, rotRight;

    cout << "Enter length of array: ";
    cin >> length;

    cout << "Enter elements of the array:\n";

    for (int i = 0; i < length; i++)
        cin >> arr[i];

    cout << "Rotate array right by how many elements: ";
    cin >> rotRight;

    if (length > 0)
    {
        rotRight %= length;
        if (rotRight < 0)
            rotRight += length;
    }

    cout << "before rotation:\n";
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";

    for (int i = 0; i < (length - rotRight) / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[length - rotRight - 1 - i];
        arr[length - rotRight - 1 - i] = temp;
    }
    for (int i = length - rotRight; i < length - rotRight / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[2 * length - rotRight - 1 - i];
        arr[2 * length - rotRight - 1 - i] = temp;
    }
    for (int i = 0; i < length / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
    cout << "\nafter rotation:\n";
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";

    return 0;
}