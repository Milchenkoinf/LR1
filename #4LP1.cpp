#include <iostream>
#include <cmath>
using namespace std;
int main () 
{
    unsigned int b;
    cout << "Hello, enter b to count 2^b: ";
    cin >> b;
    int x = pow(2,b);
    cout << "DNS: 2^" << b << " = " << x << endl;
    cout << "ONS: 2^" << b << " = " << std::oct << x;
    return 0;
}
