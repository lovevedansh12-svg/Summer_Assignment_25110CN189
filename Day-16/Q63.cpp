// Find pair with given sum

#include <iostream>
using namespace std;

int main()
{
    int arr[64], length, requiredSum;

    cout << "Enter length of array: ";
    cin >> length;

    cout << "Enter elements of the array:\n";

    for (int i = 0; i < length; i++)
        cin >> arr[i];

    cout << "Enter the required sum: ";
    cin >> requiredSum;

    bool flag = false;

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] + arr[j] == requiredSum)
            {
                cout << "Elements " << arr[i] << " and " << arr[j] << " at indices " << i << " and " << j << " respectively give the required sum\n";
                flag = true;
            }
        }
    }
    if (!flag)
        cout << "No pair found for given sum";

    return 0;
}