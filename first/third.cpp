
#include <iostream>

using namespace std;

//program to make structure for a student
struct Student
{
    int stuId;
    string stuName;
    int stuAge;
    string stuDep;
};

int main3()
{
    Student s;
    cout << "Enter your ID:\t\t";
    cin >> s.stuId;
    cout << "Enter your name:\t";
    cin >> s.stuName;
    cout << "Enter your age:\t\t";
    cin >> s.stuAge;
    cout << "Enter your department:\t";
    cin >> s.stuDep;

    cout << "\n\nYour ID is:\t\t" << s.stuId << endl;
    cout << "Your name is:\t\t" << s.stuName << endl;
    cout << "Your age is:\t\t" << s.stuAge << endl;
    cout << "Your department is:\t" << s.stuDep << endl;

    return 0;
}
