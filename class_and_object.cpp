#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student a, b;
    // a.cgpa = 3.50;
    // a.roll = 61;
    // char tmp[100] = "Fahad";
    // strcpy(a.name, tmp);
    // cout << a.name << " has got cgpa " << fixed << setprecision(2) << a.cgpa << " and his roll number is " << a.roll << endl;
    // cin >> a.name >> a.cgpa >> a.roll;
    // cin >> b.name >> b.cgpa >> b.roll;

    cin.getline(a.name, 100);
    cin >> a.cgpa >> a.roll;
    getchar();
    cin.getline(b.name, 100);
    cin >> b.cgpa >> b.roll;

    cout << a.name << " " << fixed << setprecision(2) << a.cgpa << " " << a.roll << endl;
    cout << b.name << " " << fixed << setprecision(2) << b.cgpa << " " << b.roll << endl;

    return 0;
}