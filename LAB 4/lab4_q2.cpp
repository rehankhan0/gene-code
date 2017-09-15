//Write a C++ program to find diameter, circumference and area of circle using functions.
#include <iostream>
using namespace std;
double area(double rad){
	double ar=3.141*rad*rad;
	return ar;
}
double cir(double rad){
	double c=2*3.141*rad;
	return c;
}
double dia(double ra){
	double d=2*ra;
	return d;
}
int main() {
	double r;
        cout<<"Write a C++ program to find diameter, circumference and area of circle using functions.\n";
	cout<<"Enter radius\n";
	cin>>r;
	cout<<"The diameter is "<<dia(r)<<"\n";
	cout<<"The circumference is "<<cir(r)<<"\n";
	cout<<"The area is "<<area(r)<<"\n";
	return 0;
}
