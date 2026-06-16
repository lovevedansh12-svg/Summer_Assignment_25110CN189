// Selection sort

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

    // Selection sort algo
    int min, temp;
    for (int i = 0; i < length - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < length; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        if (min != i)
        {
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
    cout << "\nafter sorting:\n";

    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";

    return 0;
}