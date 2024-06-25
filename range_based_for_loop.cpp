#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // Iterating through character using string::iterator
    // for (string::iterator it = s.begin(); it < s.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // Using Regular for Loop
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    // sort(s.begin(), s.end());

    // Using range based for loop
    for (char c : s)
    {
        cout << int(c) << " - " << c << endl;
    }

    return 0;
}