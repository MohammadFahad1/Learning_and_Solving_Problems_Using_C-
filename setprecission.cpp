#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a;
    cin >> a;
    // cout << a << endl;
    // Old way of showing precission
    // printf("%0.2lf\n");
    cout << fixed << setprecision(3) << a;

    return 0;
}