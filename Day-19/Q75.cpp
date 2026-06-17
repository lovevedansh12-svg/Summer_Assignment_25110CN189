// Transpose matrix

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
    matrix transposeA(cols, vector<int>(rows));

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
    cout << "Transpose of A:\n";

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            transposeA[i][j] = A[j][i];
            cout << transposeA[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}