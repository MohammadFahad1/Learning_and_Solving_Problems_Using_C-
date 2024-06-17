// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *a = new int;
    *a = 100;
    int **p = &a;
    cout << "Address of a: " << p << endl;
    return a;
}

int main()
{
    // Regular Variable (Static Variable)
    // int x = 10;

    // Dynamic Variable
    int *a = new int;
    *a = 10;
    cout << *a << endl;

    float *f = new float;
    *f = 20.50;
    cout << fixed << setprecision(2) << *f << endl;

    // Dynamic Function
    int *p = fun();
    cout << p << endl;

    return 0;
}