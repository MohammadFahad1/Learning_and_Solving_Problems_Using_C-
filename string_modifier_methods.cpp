#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Hello";
    string b = "World";
    /*
    // Concating String
        a = a + b;
        a += b;
        a.append(b);
        cout << a << endl
             << b << endl;
    */

    // Adding a single character after the string
    // a = "HelloA";
    // a += "A";
    a.push_back('A');
    cout << a << endl;
    a.pop_back();
    cout << a << endl;

    /*
    // Other Available Methods:
        s= -> assign string.
        s.assign() -> assign string.
        s.erase() -> erase characters from the string.
        s.replace() -> replace a portion of the string.
        s.insert() -> insert a portion to a specific position.
     */

    return 0;
}