#include<iostream>
using namespace std;
int fac(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return (n*fac(n-1));
	}
}

int main()
{
	int num,a;
	cout<<"Enter number ";
	cin>>num;
	a=fac(num);
	cout<<a;
	return 0;
	
}
