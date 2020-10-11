
#include <iostream>

using namespace std;

int binarySearch(int item, int arr[], int beg, int end) {
    int index = -1;
    int mid = (end-beg) / 2 + beg;
    if (end-beg < 1)
        return index;
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

int maintest()
{
    int a[] = { 1,4,5,7,8,11,23,42,65 };
    int index = binarySearch(22, a, 0, 9);
    cout << "answer is "<<index << endl;
    return 0;
}
