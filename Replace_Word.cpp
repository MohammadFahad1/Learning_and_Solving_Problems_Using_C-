#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;

        int pos = 0;
        while (s.find(x, pos))
        {
            s.replace(s.find(x, pos), x.length(), "#");
            pos++;
        }
        cout << s << endl;
    }

    return 0;
}