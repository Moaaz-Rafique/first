
#include <iostream>

using namespace std;

//program to make structure for a student


int main6()
{
    const int rows=2, cols=2;
    int matrixA[rows][cols];
    int matrixB[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter the value for matrix A at row " << i + 1 << " and col " << j + 1 << ":\t";
            cin >> matrixA[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter the value for matrix B at row " << i + 1 << " and col " << j + 1 << ":\t";
            cin >> matrixB[i][j];
        }
    }

    //Display:
    cout << "\nMatrix A is \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            cout << matrixA[i][j] << "\t";            
        }
        cout << "\n";
    }
    cout << "\nMatrix B is \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            cout << matrixB[i][j] << "\t";
        }
        cout << "\n";
    }
    //Addition
    cout << "\n====Addition of Matrices==== \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            cout << matrixA[i][j] + matrixB[i][j] << "\t";
        }
        cout << "\n";
    }
    //Subtraction
    cout << "\n====Subtraction of Matrices==== \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            cout << matrixA[i][j] - matrixB[i][j] << "\t";
        }
        cout << "\n";
    }
    //Multiplication
    cout << "\n====Multiplication of Matrices==== \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            int res = 0;
            for (int k = 0;k < cols;k++)
            {
                res += matrixA[i][k] * matrixB[k][j];
            }
            cout << res << "\t";
        }
        cout << "\n";
    }
    //Determinant
    int det_A = matrixA[0][0] * matrixA[1][1] - matrixA[0][1] * matrixA[1][0];
    int det_B = matrixB[0][0] * matrixB[1][1] - matrixB[0][1] * matrixB[1][0];
    cout << "\n====Determinant of Matrices==== \n";
    cout << "For A:\t" << det_A;
    cout << "\nFor B:\t" << det_B;
    //Inverse
    cout << "\n\n====Inverse of Matrices==== \n";
    if (det_A == 0)
    {
        cout << "A is a singular matrix";
    }
    else
    {
        cout << "Inverse of A:\n";
        cout << matrixA[1][1] / det_A << "\t" << -matrixA[0][1] / det_A << "\n" << -matrixA[1][0] / det_A << "\t" << matrixA[0][0] / det_A << "\n";
    }
    if (det_B == 0)
    {
        cout << "B is a singular matrix";
    }
    else
    {
        cout << "Inverse of B:\n";
        cout << matrixB[1][1] / det_B << "\t" << -matrixB[0][1] / det_B << "\n" << -matrixB[1][0] / det_B << "\t" << matrixB[0][0] / det_B << "\n";
    }
    return 0;
}
