//  Find maximum frequency element

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

    int maxCount = 0, maxFreq[length], m = 0;

    for (int i = 0; i < length; i++)
    {
        int count = 0;
        int flag = 0;
        for (int j = 0; j < length; j++)
        {
            if (j < i and arr[j] == arr[i])
            {
                flag = 1;
                break;
            }
            else if (j >= i and arr[j] == arr[i])
                count++;
        }
        if (flag)
        {
            if (count > maxCount)
            {
                m++;
                maxCount = count;
                maxFreq[--m] = arr[i];
            }
            else if (count = maxCount)
                maxFreq[++m] = arr[i];
        }
    }
    cout << "The element(s) with max frequency i.e. " << maxCount << ":\n";

    for (int i = 0; i < m; i++)
        cout << maxFreq[i] << endl;

    return 0;
}