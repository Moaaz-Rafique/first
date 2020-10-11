#include <iostream>
using namespace std;

int main()
{
    int a[] = { 11,22,33,36,45,52,57,60,64,78 };
    cout << "What item do you want to search?\t";
    int x;
    cin >> x;
    int loc = -1;
    int beg = 0;
    int end = 10;
    int mid = beg + (end - beg) / 2;
    while (beg <= end) {
        mid = beg + (end - beg) / 2;

        if (a[mid] == x) {
            loc = mid;
            break;
        }
        else if (x > a[mid]) {
            beg = mid + 1;
            mid++;
        }
        else {
            end = mid - 1;
        }
    }
    if(loc > -1)
        cout << x << " is at \'" << loc << "\' location. \n";
    else
        cout << x << " shoulb be inserted at \'" << mid << "\' location. \n";
    return 0;
}


