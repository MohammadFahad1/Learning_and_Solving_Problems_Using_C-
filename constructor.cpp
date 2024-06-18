#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        // Using Arrow sign
        // this->roll = roll;
        // this->cls = cls;
        // this->gpa = gpa;

        // Using dot symbol (without arrow sign (`this` keyword is a pointer of this class))
        (*this).roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;
    }
};

int main()
{
    Student rahim(45, 9, 2.00);
    Student karim(46, 10, 3.50);

    cout << rahim.cls << " " << fixed << setprecision(2) << rahim.gpa << " " << rahim.roll << endl;
    cout << karim.cls << " " << fixed << setprecision(2) << karim.gpa << " " << karim.roll << endl;

    return 0;
}