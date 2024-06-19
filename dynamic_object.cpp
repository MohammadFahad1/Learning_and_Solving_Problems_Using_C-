#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int cls, int roll, double gpa)
    {
        this->cls = cls;
        this->roll = roll;
        this->gpa = gpa;
    }
};

Student *fun()
{
    Student *rahim = new Student(10, 46, 3.86);
    return rahim;
}

main()
{
    Student *rahim = fun();
    cout << rahim->cls << " " << rahim->roll << " " << fixed << setprecision(2) << rahim->gpa << endl;
    delete rahim;
    cout << rahim->cls << " " << rahim->roll << " " << fixed << setprecision(2) << rahim->gpa << endl;

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int cls, int roll, double gpa)
    {
        this->cls = cls;
        this->roll = roll;
        this->gpa = gpa;
    }
};

main()
{
    // Regular Object
    // Student rahim(10, 45, 3.65);

    // Dynamic Object
    Student *karim = new Student(9, 44, 2.30);

    cout << karim->cls << " " << karim->roll << " " << fixed << setprecision(2) << karim->gpa;

    return 0;
}
*/