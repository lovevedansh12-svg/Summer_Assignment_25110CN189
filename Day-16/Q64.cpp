// Remove duplicates from array

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

    int k = 0;

    for (int i = 0; i < length; i++)
    {
        bool duplicate = false;

        for (int j = 0; j < k; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            arr[k] = arr[i];
            k++;
        }
    }
    cout << "Array after removing duplicates:\n";

    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";

    return 0;
}