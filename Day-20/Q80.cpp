// Find column-wise sum

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
    cout << "Column-wise sum:\n";

    for (int i = 0; i < cols; i++)
    {
        int colSum = 0;

        for (int j = 0; j < rows; j++)
            colSum += A[j][i];

        cout << " | " << "Column " << i + 1 << ": " << colSum;
    }
    return 0;
}