//Write a C++ program to input all sides of a triangle and check whether triangle is valid or not.
#include <iostream>
using namespace std;
int main() {
	double s1,s2,s3;
	cout <<"Enter the sides of the triangle\n";
        cout<<"Write a C++ program to input all sides of a triangle and check whether triangle is valid or not.\n";
	cin >>s1>>s2>>s3;
	if (s1<s2+s3 && s2<s1+s3 && s3<s1+s2)
	cout <<"The given sides form a triangle\n";
	else
	cout <<"The given sides do not form a triangle\n";
	return 0;
}
