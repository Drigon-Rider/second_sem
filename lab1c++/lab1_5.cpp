#include <iostream>

using namespace std;

int main()
{
    int A[3][3], B[3][3], C[3][3];
    int i, j;

    cout << "Enter elements for matrix A: " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }                
    }

    cout << "Enter elements for matrix B: " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> B[i][j];
        }
    }

    // adding the two matrices
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // printing the transpose of resultant matrix
    cout << "Transpose of resultant matrix: " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << C[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}