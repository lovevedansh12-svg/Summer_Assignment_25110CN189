// Merge two sorted arrays

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int length1, length2;

    cout << "Enter length of first array: ";
    cin >> length1;

    cout << "Enter length of second array: ";
    cin >> length2;

    vector<int> arr1(length1), arr2(length2), merged(length1 + length2);

    cout << "Enter elements of first array: ";

    for (int i = 0; i < length1; i++)
    {
        cin >> arr1[i];

        if (i > 0 && arr1[i] < arr1[i - 1])
        {
            cout << "First array is not sorted!";
            return 0;
        }
    }
    cout << "Enter elements of second array: ";

    for (int i = 0; i < length2; i++)
    {
        cin >> arr2[i];

        if (i > 0 && arr2[i] < arr2[i - 1])
        {
            cout << "Second array is not sorted!";
            return 0;
        }
    }
    int i = 0, j = 0;

    while (i < length1 && j < length2)
    {
        if (arr1[i] <= arr2[j])
        {
            merged[i + j] = arr1[i];
            i++;
        }
        else
        {
            merged[i + j] = arr2[j];
            j++;
        }
    }
    while (i < length1)
    {
        merged[i + j] = arr1[i];
        i++;
    }
    while (j < length2)
    {
        merged[i + j] = arr2[j];
        j++;
    }
    cout << "Merged arrays:\n";

    for (int i = 0; i < length1 + length2; i++)
        cout << merged[i] << " ";

    return 0;
}