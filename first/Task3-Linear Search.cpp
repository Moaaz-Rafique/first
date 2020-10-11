#include <iostream>

using namespace std;

//Linear search


int main33()
{
    int a[10];
    int size;


    cout << "Enter size of your array:\t";
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        cout << "Enter the value " << i + 1 << " of the array:\t";
        cin >> a[i];
    }

    cout << "What item do you want to search?\t";
    int x;
    cin >> x;
    int loc = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] == x) {
            loc = i + 1;
        }
    }
    cout << " is at " << loc << "location. \n If loc is 0 it means the value does not exist.";
    

    return 0;
}
