// Add matrices

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
    matrix B(rows, vector<int>(cols));
    matrix sum(rows, vector<int>(cols));

    cout << "Enter elements of matrix A:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "a(" << i + 1 << ", " << j + 1 << "): ";
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of matrix B:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "b(" << i + 1 << ", " << j + 1 << "): ";
            cin >> B[i][j];
        }
    }
    cout << "Matrix A:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << A[i][j] << " ";

        cout << endl;
    }
    cout << "Matrix B:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << B[i][j] << " ";

        cout << endl;
    }
    cout << "Matrix A+B:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}