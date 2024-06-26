#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void hello()
    {
        cout << "Hello" << endl;
    }
};

main()
{
    Person rakib("Fahad", 26);
    rakib.hello();

    return 0;
}