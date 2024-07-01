#include <bits/stdc++.h>
using namespace std;

namespace Rakib
{
    int age = 24;
    void hello()
    {
        cout << "Rakib namespace" << endl;
    }

    // We can also have classes inside namespace
    // class Person{

    // }
}

namespace Sakib
{
    int age2 = 30;
    void hello2()
    {
        cout << "Sakib namespace" << endl;
    }
}

using namespace Rakib;
using namespace Sakib;

int main()
{
    cout << age << endl;
    cout << age2 << endl;
    hello();
    hello2();
    return 0;
}