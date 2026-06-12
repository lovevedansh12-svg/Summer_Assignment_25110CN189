// Count even and odd elements

#include <iostream>
using namespace std;

int main()
{
    int arr[64], length, evenCount = 0, oddCount = 0;

    cout << "Enter length of array: ";
    cin >> length;

    cout << "Enter elements of array:\n";

    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
            evenCount++;

        else
            oddCount++;
    }
    cout << "No. of even elements: " << evenCount << endl
         << "No. of odd elements: " << oddCount;

    return 0;
}