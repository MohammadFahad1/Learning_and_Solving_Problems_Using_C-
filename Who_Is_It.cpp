#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char section;
    int total_marks;
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student One;
        Student Two;
        Student Three;
        cin >> One.id >> One.name >> One.section >> One.total_marks;
        cin >> Two.id >> Two.name >> Two.section >> Two.total_marks;
        cin >> Three.id >> Three.name >> Three.section >> Three.total_marks;

        if (One.total_marks >= Two.total_marks && One.total_marks >= Three.total_marks)
        {
            cout << One.id << " " << One.name << " " << One.section << " " << One.total_marks << endl;
        }
        else if (Two.total_marks >= One.total_marks && Two.total_marks >= Three.total_marks)
        {
            cout << Two.id << " " << Two.name << " " << Two.section << " " << Two.total_marks << endl;
        }
        else
        {
            cout << Three.id << " " << Three.name << " " << Three.section << " " << Three.total_marks << endl;
        }
    }

    return 0;
}