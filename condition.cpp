#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    // // Regular conditioning
    // if (x == 10)
    // {
    //     cout << x << " equal to 10" << endl;
    // }
    // else
    // {
    //     cout << x << " is not 10" << endl;
    // }

    // // Using Ternary operator
    // x == 10 ? cout << x << endl : cout << "Not 10" << endl;
    (x % 2 == 0) ? cout << "Even" << endl : cout << "Odd" << endl;

    return 0;
}