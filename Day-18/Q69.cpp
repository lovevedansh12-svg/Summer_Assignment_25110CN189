// Bubble sort

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

    // Bubble sort algo
    for (int i = 0; i < length - 1; i++)
    {
        bool flag = false;

        for (int j = 0; j < length - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag)
            break;
    }
    cout << "\nafter sorting:\n";

    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";

    return 0;
}