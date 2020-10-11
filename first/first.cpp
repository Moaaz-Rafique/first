
#include <iostream>

using namespace std;

//program to find smallest in three numbers


int main1()
{
    int a, b, c;
    cout << "Enter first number:\t";
    cin >> a;
    cout << "Enter second number:\t";
    cin >> b;
    cout << "Enter third number:\t";
    cin >> c;
    if (a < b && a < c)
        cout << "First number i.e \"" << a << "\" is the smallest integer\n";
    else if (b < a && b < c)
        cout << "Second number i.e \"" << b << "\" is the smallest integer\n";
    else
        cout << "Third number i.e \"" << c << "\" is the smallest integer\n";
    return 0;
}

