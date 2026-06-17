// Multiply matrices

#include <iostream>
#include <vector>
using namespace std;
using matrix = vector<vector<int>>;

int main()
{
    int p, q, Q, r;

    cout << "Enter no. of rows of A: ";
    cin >> p;
    cout << "Enter no. of columns of A: ";
    cin >> q;
    cout << "Enter no. of rows of B: ";
    cin >> Q;
    cout << "Enter no. of columns of B: ";
    cin >> r;

    if (q != Q)
        cout << "For AxB, no. of columns of A must be equal to no. of rows of B.";

    else
    {
        matrix A(p, vector<int>(q));
        matrix B(q, vector<int>(r));
        matrix product(p, vector<int>(r));

        cout << "Enter elements of matrix A:\n";

        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << "a(" << i + 1 << ", " << j + 1 << "): ";
                cin >> A[i][j];
            }
        }
        cout << "Enter elements of matrix B:\n";

        for (int i = 0; i < q; i++)
        {
            for (int j = 0; j < r; j++)
            {
                cout << "b(" << i + 1 << ", " << j + 1 << "): ";
                cin >> B[i][j];
            }
        }
        cout << "Matrix A:\n";

        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
                cout << A[i][j] << " ";

            cout << endl;
        }
        cout << "Matrix B:\n";

        for (int i = 0; i < q; i++)
        {
            for (int j = 0; j < r; j++)
                cout << B[i][j] << " ";

            cout << endl;
        }
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < r; j++)
            {
                product[i][j] = 0;

                for (int k = 0; k < q; k++)
                    product[i][j] += A[i][k] * B[k][j];
            }
        }
        cout << "Matrix AxB:\n";

        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < r; j++)
                cout << product[i][j] << " ";

            cout << endl;
        }
    }
    return 0;
}