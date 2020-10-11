
#include <iostream>

using namespace std;


int main31()
{
    int a[10][10];
    int rA, cA;
    int b[10][10];
    int rB, cB;
    cout << "Enter the number of rows for matrix A:\t\t";
    cin >> rA;
    cout << "Enter the number of columns for matrix A:\t";
    cin >> cA;
    cout << "\nEnter the number of rows for matrix B:\t\t";
    cin >> rB;
    cout << "Enter the number of columns for matrix B:\t";
    cin >> cB;
    cout << "\nEnter values for matrix A\n";

    if (cA != rB) {
        cout << "Matrices can't be multiplied\n";
        return 0;
    }
    for (int i = 0; i < rA; i++) {
        cout << "Enter values for row " << i + 1 << endl;
        for (int j = 0; j < cA; j++)
        {
            cout << "Enter the value for col " << j + 1 << ":\t";
            cin >> a[i][j];
        }
    }
    cout << "\nEnter values for matrix B\n";
    for (int i = 0; i < rB; i++) {
        cout << "Enter values for row " << i + 1 << endl;
        for (int j = 0; j < cB; j++)
        {
            cout << "Enter the value for col " << j + 1 << ":\t";
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++)
        {
            int res = 0;
            for (int k = 0;k < cA;k++)
            {
                res += a[i][k] * b[k][j];
            }
            cout << res << "\t";
        }
        cout << "\n";
    }


    return 0;
}
