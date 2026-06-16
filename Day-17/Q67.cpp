// Intersection of arrays

#include <iostream>
using namespace std;

int main()
{
    int arr1[64], arr2[64], lengthFirst, lengthSecond;

    cout << "Enter length of first array: ";
    cin >> lengthFirst;

    cout << "Enter elements of first array:\n";

    for (int i = 0; i < lengthFirst; i++)
        cin >> arr1[i];

    cout << "Enter length of second array: ";
    cin >> lengthSecond;

    cout << "Enter elements of second array:\n";

    for (int i = 0; i < lengthSecond; i++)
        cin >> arr2[i];

    cout << "First array:\n";

    for (int i = 0; i < lengthFirst; i++)
        cout << arr1[i] << " ";

    cout << "\nSecond array:\n";

    for (int i = 0; i < lengthSecond; i++)
        cout << arr2[i] << " ";

    // Intersection
    int k = 0;

    for (int i = 0; i < lengthFirst; i++)
    {
        bool duplicate = false;

        for (int j = 0; j < k; j++)
        {
            if (arr1[i] == arr1[j])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            for (int j = 0; j < lengthSecond; j++)
            {
                if (arr2[j] == arr1[i])
                {
                    arr1[k] = arr1[i];
                    k++;
                    break;
                }
            }
        }
    }
    cout << "\nIntersection of the two arrays:\n";

    for (int i = 0; i < k; i++)
        cout << arr1[i] << " ";

    return 0;
}