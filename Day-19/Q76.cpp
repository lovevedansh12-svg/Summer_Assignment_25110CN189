// Find diagonal sum

#include <iostream>
#include <vector>
using namespace std;
using matrix = vector<vector<int>>;

int main()
{
    int order;

    cout << "Enter order of matrix: ";
    cin >> order;

    matrix A(order, vector<int>(order));

    cout << "Enter elements of matrix A:\n";

    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            cout << "a(" << i + 1 << ", " << j + 1 << "): ";
            cin >> A[i][j];
        }
    }
    cout << "Matrix A:\n";

    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
            cout << A[i][j] << " ";

        cout << endl;
    }
    int diagSum = 0;

    for (int i = 0; i < order; i++)
        diagSum += A[i][i];

    cout << "Sum of diagonal elements: " << diagSum;

    return 0;
}