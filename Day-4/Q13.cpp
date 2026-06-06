// Generate Fibonacci series

#include <iostream>
using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, temp;

    cout << "Enter the no. of terms : ";
    cin >> n;

    cout << t1;

    for (int i = 1; i < n; i++)
    {
        cout << " " << t2;

        temp = t2;
        t2 = t1 + t2;
        t1 = temp;
    }
    return 0;
}