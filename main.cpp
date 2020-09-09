#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
    int x;
    cout << "Hello, enter the x to count x^8 + 3x^7 - 4: ";
    cin  >> x;
    double g = pow(x,8) + 3*pow(x,7) - 4;
    cout << x << "^8 + 3*" << x << "^7 - 4 = " << fixed << setprecision(3) << g;
    return 0;
}

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
    unsigned int a;
    cout << "Hello, enter the a to count |4a| - 2 * sqrt(a+1): ";
    cin >> a;
    double m = abs(4 * a) - 2 * sqrt(a + 1);
    cout << "|4*" << a << "|-2*sqrt(" << a << "+1) =" << fixed << setprecision(3) << m;
    return 0;
}

#include <iostream>
#include <ios>
using namespace std;
int main () {
    char k;
    char l;
    char m;
    char n;
    cout << "write 1 (true) or 0 (false) to assign values k, l, m, n respectively" << endl;
    cout << "write k: ";
    cin >> k;
    cout << "write l: ";
    cin >> l;
    cout << "write m: ";
    cin >> m;
    cout << "write n: ";
    cin >> n;
    cout << "n V (m + k ^ !l)" << endl;
    bool s = n || (m ^ k && !l);
    cout << n << "^(" << m <<"+" << k << "^!" << l << ") <=> " << boolalpha << s;
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main () {
    unsigned int b;
    cout << "Hello, enter b to count 2^b: ";
    cin >> b;
    int x = pow(2,b);
    cout << "DNS: 2^" << b << " = " << x << endl;
    cout << "ONS: 2^" << b << " = " << std::oct << x;
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    unsigned short int f;
    unsigned short int e;
    unsigned short int d;
    unsigned short int c;
    cout << "Hello, enter values of f, e, d, c respectively" << endl;
    cout << "write f: ";
    cin >> f;
    cout << "write e: ";
    cin >> e;
    cout << "write d: ";
    cin >> d;
    cout << "write c: ";
    cin >> c;
    int x = !f || e && !(c ^ d);
    cout << "!f V e ^ !(c+d) <=> " << showbase << hex << setw(2) << x;
    return 0;
}