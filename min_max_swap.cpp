#include <iostream>
#include <utility>
// #include <algorithm>
using namespace std;

// void my_swap(int *a, int *b)
// {
//     int tmp = *a;
//     *a = *b;
//     *b = tmp;
// }

int main()
{
    // int a, b, c, d;
    // cin >> a >> b >> c >> d;
    // // if (a < b)
    // //     cout << a;
    // // else
    // //     cout << b;

    // // cout << min(a, b) << endl;

    // // int d;
    // // cin >> d;
    // // cout << max(a, d) << endl;

    // int mn = min({a, b, c, d});
    // int mx = max({a, b, c, d});

    // cout << "Minimum Number is: " << mn << endl
    //      << "Maximum number is: " << mx << endl;

    // // Swapping Manually
    // int a, b;
    // cin >> a >> b;
    // int tmp = b;
    // b = a;
    // a = tmp;
    // cout << a << " " << b << endl;

    // // Swapping using Function
    // int a, b;
    // cin >> a >> b;
    // my_swap(&a, &b);
    // cout << a << " " << b;

    // Swapping through utility built in function
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b;

    return 0;
}