// Recursive Fibonaccci

#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int num;
    cout << "Which term of the sequence ?: ";
    cin >> num;

    cout << "The term is: " << fibo(num);

    return 0;
}