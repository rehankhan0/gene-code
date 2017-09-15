//Write a C++ program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include <iostream>
using namespace std;
int main() {
	double a1,a2,a3,sum;
	cout <<"Enter the angles of a triangle\n";
        cout<<"Program to check whether the triangle is equilateral, isosceles or scalene triangle.\n";

	cin >>a1>>a2>>a3;
	sum = a1+a2+a3;
	if (sum==180)
	{
		if (a1==a2 && a2==a3 && a3==a1)
		cout <<"The triangle is equilateral\n";
		else
		if (a1==a2 && a1!=a3 ||a2==a3 && a2!=a1 ||a3==a1 && a3!=a2)
		cout <<"The triangle is isoceles\n";
		else
		cout <<"The triangle is scalene\n";
	}
	else
	cout <<"Invalid entry\n";
	return 0;
}
