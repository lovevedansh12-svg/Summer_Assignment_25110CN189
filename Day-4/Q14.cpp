// Find nth Fibonacci term

#include <iostream>
using namespace std;
int main()
{
    int n, t1 = 1, t2 = 1, temp;
    cout << "Enter the value of n : ";
    cin >> n;
    if (n == 1)
        cout << t1;
    else
    {
        for (int i = 2; i < n; i++)
        {
            temp = t2;
            t2 = t1 + t2;
            t1 = temp;
        }
        cout << "The nth term is : " << t2;
    }
    return 0;
}