#include <iostream>
#include <cmath>
#include <iomanip>
int main () 
{
	long int x;
	std::cout << "Enter the x to count x^8 + 3x^7 - 4: " ;
	std::cin >> x;
	double t = pow(x,8) +3 * pow(x,7) - 4 ;
	std::cout << x << "^8 + 3 * " << x << "^7 - 4 = " << std::setprecision(3) << t;
	return 0;
}
