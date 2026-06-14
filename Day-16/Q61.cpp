// Find missing number in array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 1, 5, 6, 8, 2, 7, 9};
    int length = sizeof(arr) / sizeof(arr[0]);
    int N = length + 1;

    int expectedSum = N * (N + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < length; i++)
        actualSum += arr[i];

    int missingElement = expectedSum - actualSum;

    cout << "The missing element is: " << missingElement << endl;

    return 0;
}