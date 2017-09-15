//Write a C++ program to input angles of a triangle and check whether triangle is valid or not.
#include <iostream>
using namespace std;
int main() {
	double a1,a2,a3,sum;
	cout <<"Write a C++ program to input angles of a triangle and check whether triangle is valid or not.\n";
        cout <<"Enter the angles of a triangle with a space.\n";
        
	cin >>a1>>a2>>a3;
	sum = a1+a2+a3;
	if (sum==180)
	cout <<"The given angles form a triangle\n";
	else
	cout <<"The given angles do not form a triangle\n";
	return 0;
}
