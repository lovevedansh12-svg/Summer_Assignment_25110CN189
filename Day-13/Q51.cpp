// Find largest and smallest element

#include <iostream>
using namespace std;

int main()
{
    float arr[64];
    int length;

    cout << "Enter length of array: ";
    cin >> length;

    cout << "Enter elements of array:\n";

    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    float max = arr[0], min = arr[0];

    for (int i = 0; i < length; i++)
    {
        if (max < arr[i])
            max = arr[i];

        if (min > arr[i])
            min = arr[i];
    }
    cout << "Largest element: " << max << endl
         << "Smallest element: " << min;

    return 0;
}