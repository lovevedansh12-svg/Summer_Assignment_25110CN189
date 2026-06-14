// Move zeroes to end

#include <iostream>
using namespace std;

int main()
{
    int arr[64], length, flag = 1;

    cout << "Enter length of array: ";
    cin >> length;

    cout << "Enter elements of the array:\n";

    for (int i = 0; i < length; i++)
        cin >> arr[i];

    cout << "before:\n";
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";

    int j = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }
    cout << "\nafter:\n";
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";

    return 0;
}