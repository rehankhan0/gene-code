//Write a C++ program to calculate profit or loss.

#include <iostream>
using namespace std;
int main() {
	double cp,sp,p,l;
	cout<<"Program to calculate profit or loss.\n";
        cout <<"Enter the cost price\n";
	cin >>cp;
	cout <<"Enter the selling price\n";
	cin >>sp;
	if (cp>sp)
	{
		l = cp-sp;
		cout <<"The loss is = Rs."<<l<<"\n";
	}
	if (sp>cp)
	{
		p = sp-cp;
		cout <<"The profit is = Rs."<<p<<"\n";
	}
	else if (cp==sp)
	cout <<"There is no profit or loss\n";
	return 0;
}
