#include <iostream>
using namespace std;

//Linear search
int binarySearch1(int item, int arr[], int beg, int end) {
    int index = -1;
    int mid = (end - beg) / 2 + beg;
    if (end - beg < 1)
        return mid;
    if (arr[mid] == item) {

        return mid;
    }
    else if (arr[mid] > item) {
        return binarySearch1(item, arr, beg, mid - 1);
    }
    else if (arr[mid] < item) {
        return binarySearch1(item, arr, mid + 1, end);
    }

    return index;
}
int main35()
{
    int a[] = { 11,22,33,36,45,52,57,60,64,78 };
    cout << "What item do you want to search?\t";
    int x = 52, y = 33;
    int locX = binarySearch1(x, a, 0, 10);
    cout << "\n" << x << " is at \'" << locX << "\' location. \n";
    int locY = binarySearch1(y, a, 0, 10);
    cout << y << " is at \'" << y << "\' location. \n";
    return 0;
}

