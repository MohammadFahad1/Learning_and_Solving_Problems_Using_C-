#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int cls, double gpa, int roll)
    {
        this->cls = cls;
        this->gpa = gpa;
        this->roll = roll;
    }
};

Student fun()
{
    Student rahim(10, 2.35, 45);
    return rahim;
}

int main()
{
    Student ans = fun();
    cout << ans.cls << " " << fixed << setprecision(2) << ans.gpa << " " << ans.roll << endl;

    return 0;
}