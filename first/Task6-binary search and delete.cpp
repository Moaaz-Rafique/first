
#include <iostream>
using namespace std;

int binarySearch(int item, int arr[], int beg, int end) {
    int index = -1;
    int mid = (end - beg) / 2 + beg;
    if (end - beg < 1)
        return mid;
    if (arr[mid] == item) {

        return mid;
    }
    else if (arr[mid] > item) {
        return binarySearch(item, arr, beg, mid - 1);
    }
    else if (arr[mid] < item) {
        return binarySearch(item, arr, mid + 1, end);
    }

    return index;
}
int main36()
{
    int a[] = { 11,22,33,36,45,52,57,60,64,78 };
    int size = 10;
    cout << "What item do you want to search?\t";
    int x = 45, y = 78;
    int locX = binarySearch(x, a, 0, 10);
    cout << "\n" << x << " is at \'" << locX << "\' location. \n";
    

    for (int i = locX; i < size-1; i++)
    {
        a[i] = a[i + 1];
    }
    size--;
    int locY = binarySearch(y, a, 0, 10);
    cout << y << " is at \'" << y << "\' location. \n";
    for (int i = locX; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }
    cout << "The final array is after deleting the x and y elements is:\n";
    for (int i = 0; i < size; i++) {
        cout << a[i]<<", ";
    }
    cout << "\b\b  \n";
    return 0;
}



