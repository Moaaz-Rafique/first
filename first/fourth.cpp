
#include <iostream>

using namespace std;

//program to make structure for a student using pointers
struct Student
{
    int stuId;
    string stuName;
    int stuAge;
    string stuDep;
};

int main4()
{
    Student s, *pS;
    pS = &s;
    cout << "Enter your ID:\t\t";
    cin >> pS->stuId;
    cout << "Enter your name:\t";
    cin >> pS->stuName;
    cout << "Enter your age:\t\t";
    cin >> pS->stuAge;
    cout << "Enter your department:\t";
    cin >> pS->stuDep;

    cout << "\n\nYour ID is:\t\t" << pS->stuId << endl;
    cout << "Your name is:\t\t" << pS->stuName << endl;
    cout << "Your age is:\t\t" << pS->stuAge << endl;
    cout << "Your department is:\t" << pS->stuDep << endl;

    return 0;
}
