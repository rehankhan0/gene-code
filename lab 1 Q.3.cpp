
#include <iostream>
using namespace std;
 
int main() {
 
	double a, b, c, d, e, f;
	
	cout << "please the two numbers: \n" ;
	cin >> a >> b ;
	c = a + b;
	d = a / b;
	e = a*b ;
	f = a - b;
	cout << "the sum of " << a << " and " << b << " is " << c << "\n" ;
	cout << "the product of " << a << " and " << b << " is " << e << "\n";
	cout << "the division of " << a << " by " << b << " is " << d << "\n";
	cout << "the differnece of " << a << " and " << b << " is " << f << "\n" ;
 
 
	return 0;
}
