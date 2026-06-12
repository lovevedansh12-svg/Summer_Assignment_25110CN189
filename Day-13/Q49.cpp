// Input and display array

#include <iostream>
using namespace std;

int main()
{
    char arr[64];
    int length;

    cout << "Enter length of array: ";
    cin >> length;

    cout << "Enter elements of array:\n";

    for (int i = 0; i < length; i++)
        cin >> arr[i];

    cout << "Array is: \n";

    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";

    return 0;
}