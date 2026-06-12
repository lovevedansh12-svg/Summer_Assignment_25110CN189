// Find sum and average of array

#include <iostream>
using namespace std;

int main()
{
    float arr[64], sum = 0, avg;
    int length;

    cout << "Enter length of array: ";
    cin >> length;

    cout << "Enter elements of array:\n";

    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of elements: " << sum << endl
         << "Average: " << sum / length;

    return 0;
}