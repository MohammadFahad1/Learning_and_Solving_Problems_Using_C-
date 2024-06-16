#include <iostream>
using namespace std;
// #include <stdio.h>

int main()
{
    int a, b, c;
    // cout << scanf("%d %d %d", &a, &b, &c);
    // while (scanf("%d %d %d") != EOF)
    // {
    //     cout << a << " " << b << " " << c << endl;
    // }
    while (cin >> a >> b >> c)
    {
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}