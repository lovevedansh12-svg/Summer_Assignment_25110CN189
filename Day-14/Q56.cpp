// Find duplicates in array

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

    for (int i = 0; i < length; i++)
    {
        int count = 0;

        for (int j = 0; j < length; j++)
        {
            if (j < i and arr[j] == arr[i])
                break;
            else if (j >= i and arr[j] == arr[i])
                count++;
        }
        if (count > 1)
            cout << "The element " << arr[i] << " occurs " << count << " times in the array\n";

        else if (count == 1)
            cout << "No duplicates of element " << arr[i];
    }
    return 0;
}