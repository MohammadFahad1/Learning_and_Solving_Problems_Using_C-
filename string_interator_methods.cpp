#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s;
    // cin >> s;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    // Iterators
    // cout << *s.begin() << endl;
    // cout << *(s.end() - 1) << endl;
    string s;
    cin >> s;

    // In the older versions of C++
    // string::iterator it;
    // for (string::iterator it = s.begin(); it < s.end(); it++)

    // In the latest versions of C++ we can use auto keyword
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}