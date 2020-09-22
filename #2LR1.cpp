#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () 
{
    unsign int a;
    cout << "Hello, enter the a to count |4a| - 2 * sqrt(a+1): ";
    cin >> a;
    double m = abs(4 * a) - 2 * sqrt(a + 1);
    cout << "|4*" << a << "|-2*sqrt(" << a << "+1) =" << showpos << m;
    return 0;
}
