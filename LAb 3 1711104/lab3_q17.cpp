//Write a C++ program to find all roots of a quadratic equation.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a,b,c,val;
	double root1,root2,root,rlpart,impart;
	cout <<"Enter the values of a, b, c\n";
        cout <<"Program to find all roots of a quadratic equation.\n";
	cin >>a>>b>>c;
	val = pow(b,2)-(4*a*c);
	if (val>0)
	{
	root1 =	(-b+sqrt(val))/(2*a);
	cout <<"One root = " <<root1 <<endl;
	root2 = (-b-sqrt(val))/(2*a);
	cout <<"Second root = " <<root2 <<endl;
	}
	if (val==0)
	{
		root = -b/(2*a);
		cout <<"The root is = " <<root<<endl;
	}
	if (val<0)
	{
		rlpart = -b/(2*a);
		impart = sqrt(-val)/(2*a);
		cout <<"One root = " <<rlpart <<"+ " <<"i" <<impart <<endl;
		cout <<"Second root = " <<rlpart <<"- " <<"i" <<impart <<endl;
	}
	return 0;
}
