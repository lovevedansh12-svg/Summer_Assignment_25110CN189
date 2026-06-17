//  Check symmetric matrix

#include <iostream>
#include <vector>
using namespace std;
using matrix = vector<vector<int>>;

int main()
{
    int order;

    cout << "Enter order of matrix A: ";
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
    for (int i = 0; i < order - 1; i++)
    {
        for (int j = i + 1; j < order; j++)
        {
            if (A[i][j] != A[j][i])
            {
                cout << "Matrix A is not symmetric.";
                return 0;
            }
        }
    }
    cout << "Matrix A is symmetric";

    return 0;
}