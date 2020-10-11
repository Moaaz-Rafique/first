#include <iostream>

using namespace std;

//program to sort array

int main2()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number " << i + 1 << ":\t";
        cin >> a[i];
    }
    cout << "Sorted array:\n";
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        cout << a[i] << endl;
    }
    return 0;
}
