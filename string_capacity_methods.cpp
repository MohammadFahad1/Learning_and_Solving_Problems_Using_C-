#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "Hello";
    // cout << s << endl
    //      << s.size() << endl;
    // s = "Gello Re";
    // cout << s << endl
    //      << s.size() << endl;
    // string s1 = "Hello";
    // string s2 = "Hello";
    // if (s1 == s2)
    // {
    //     cout << "Same" << endl;
    // }
    // else
    // {
    //     cout << "Not Same" << endl;
    // }

    // String capacity Metods
    // string s = "Hello World";
    // cout << s.size() << endl;
    // cout << s.capacity() << endl;
    // s = "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH";
    // cout << s.size() << endl;
    // cout << s.capacity() << endl;
    // cout << s.max_size() << endl;
    // string s = "Hello";
    // cout << s << endl;
    // cout << s.size() << endl;
    // s.clear();
    // cout << s.size();
    // string s = "Hello";
    // // s.clear();
    // if (s.empty())
    //     cout << "Empty" << endl;
    // else
    //     cout << "Not Empty" << endl;

    string s;
    cin >> s;
    s.resize(5);
    s.resize(8, '-');
    cout << s << endl;

    return 0;
}