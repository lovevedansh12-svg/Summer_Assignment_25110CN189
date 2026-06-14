// Rotate array left

#include <iostream>
using namespace std;

int main()
{
    int arr[64], length, rotLeft;

    cout << "Enter length of array: ";
    cin >> length;

    cout << "Enter elements of the array:\n";

    for (int i = 0; i < length; i++)
        cin >> arr[i];

    cout << "Rotate array left by how many elements: ";
    cin >> rotLeft;

    if (length > 0)
    {
        rotLeft %= length;
        if (rotLeft < 0)
            rotLeft += length;
    }

    cout << "before rotation:\n";
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";

    for (int i = 0; i < rotLeft / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[rotLeft - 1 - i];
        arr[rotLeft - 1 - i] = temp;
    }
    for (int i = rotLeft; i < (length + rotLeft) / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[length + rotLeft - 1 - i];
        arr[length + rotLeft - 1 - i] = temp;
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