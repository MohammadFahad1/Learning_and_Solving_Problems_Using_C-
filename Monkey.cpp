#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000000];
    while (cin.getline(s, 1000000))
    {
        long int len = strlen(s);
        sort(s, s + len);
        for (long int i = 0; i < len; i++)
        {
            if ((int)s[i] == 32)
            {
                continue;
            }
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}