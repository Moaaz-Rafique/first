#include <iostream>

using namespace std;

//vectors


int main32()
{
    int a[10];
    int b[10];

    int x, y;
    int size;


    cout << "Enter size of your vector:\t";
    cin >> size;
    for (int i = 0; i < size; i++) {        
        cout << "Enter the value " << i + 1 << " of vector A:\t";
        cin >> a[i];        
    }
    for (int i = 0; i < size; i++) {
        cout << "Enter the value " << i + 1 << " of vector B:\t";
        cin >> b[i];
    }

    cout << "Enter your \'X\' value:\t";
    cin >> x;

    cout << "Enter your \'Y\' value:\t";
    cin >> y;
    cout << "\'XA+YB\' is :\t";
    for (int i = 0; i < size; i++) {
        cout << a[i] * x + b[i] * y << ", ";
    }
    cout << "\b\b  \n\'A.B\' is :\t";
    for (int i = 0; i < size; i++) {
        cout << a[i] * b[i] << ", ";
    }
    cout << "\b\b  \n";

    return 0;
}
