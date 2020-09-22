#include <iostream>
#include <ios>
using namespace std;
int main () {
    bool k;
    bool l;
    bool m;
    bool n;
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
    bool s = n || (m != k && !l);
    cout << n << "^(" << m <<"+" << k << "^!" << l << ") <=> " << boolalpha << s;
    return 0;
