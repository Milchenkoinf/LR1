#include <iostream>
#include <iomanip>
using namespace std;
int main ()
 {
    unsigned short int f, e, d, c;
    cout << "Hello, enter values of f, e, d, c respectively" << endl;
    cout << "write f: ";
    cin >> f;
    cout << "write e: ";
    cin >> e;
    cout << "write d: ";
    cin >> d;
    cout << "write c: ";
    cin >> c;
    unsigned short int x = ~f | e & ~(c ^ d);
    cout << "!f V e ^ !(c+d) <=> " << showbase << hex << setw(2) << x;
    return 0;
}
