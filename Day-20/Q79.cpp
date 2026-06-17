// Find row-wise sum

#include <iostream>
#include <vector>
using namespace std;
using matrix = vector<vector<int>>;

int main()
{
    int rows, cols;

    cout << "Enter no. of rows: ";
    cin >> rows;
    cout << "Enter no. of columns: ";
    cin >> cols;

    matrix A(rows, vector<int>(cols));

    cout << "Enter elements of matrix A:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "a(" << i + 1 << ", " << j + 1 << "): ";
            cin >> A[i][j];
        }
    }
    cout << "Matrix A:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << A[i][j] << " ";

        cout << endl;
    }
    cout << "Row-wise sum:\n";

    for (int i = 0; i < rows; i++)
    {
        int rowSum = 0;

        for (int j = 0; j < cols; j++)
            rowSum += A[i][j];

        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
    return 0;
}