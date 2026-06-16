// Find common elements

#include <iostream>
using namespace std;

void commonElements(int result[], int k, int arr[], int n = 2)
{
    int length;

    cout << "Enter length of array " << n << ": ";
    cin >> length;

    cout << "Enter elements of array " << n << ":\n";

    for (int i = 0; i < length; i++)
        cin >> arr[i];

    int p = 0, q = k;

    for (int i = 0; i < q; i++)
    {
        bool found = false;
        for (int j = 0; j < length; j++)
        {
            if (arr[j] == result[p])
            {
                found = true;
                p++;
                break;
            }
        }
        if (!found)
        {
            for (int j = p; j < k - 1; j++)
                result[j] = result[j + 1];

            k--;
        }
    }
    if (k == 0)
    {
        cout << "No common elements found.\n";
        return;
    }
    char choice;

    cout << "If you have more arrays, press 0.\nPress any other key to compute result.\n->";
    cin >> choice;

    if (choice == '0')
    {
        commonElements(result, k, arr, n + 1);
        return;
    }
    else
    {
        cout << "The common elements in the given arrays are:\n";

        for (int i = 0; i < k; i++)
            cout << result[i] << endl;

        return;
    }
}
int main()
{
    int result[64], length, arr[64];

    cout << "Enter length of array 1: ";
    cin >> length;

    cout << "Enter elements of array 1:\n";

    for (int i = 0; i < length; i++)
        cin >> result[i];

    int k = 0;

    for (int i = 0; i < length; i++)
    {
        bool duplicate = false;

        for (int j = 0; j < k; j++)
        {
            if (result[i] == result[j])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            result[k] = result[i];
            k++;
        }
    }
    commonElements(result, k, arr);

    return 0;
}