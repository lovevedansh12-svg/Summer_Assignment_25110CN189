// Second largest element

#include <iostream>
using namespace std;

int main()
{
    int arr[64], length;

    cout << "Enter length of array: ";
    cin >> length;

    cout << "Enter elements of array:\n";

    for (int i = 0; i < length; i++)
        cin >> arr[i];

    int max = arr[0], secondMax = arr[0];

    for (int i = 1; i < length; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] < max)
            secondMax = arr[i];
    }

    cout << "Largest element: " << max << endl;
    cout << "Second largest element: " << secondMax;

    return 0;
}
