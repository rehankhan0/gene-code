#include<iostream>
using namespace std;

int gcd(int a,int b,int i)
{
	if(a==1||b==1)
	{
		return 1;
	}
	else if((a%i)==0&&(b%i==0))
	{
		return i;
	}
	else 
	{
		return gcd(a,b,(i-1));
	}
}

int main()
{
	int n1,n2,a;
	cout<<"Enter first number ";
	cin>>n1;
	cout<<"Enter second number ";
	cin>>n2;
	
	a=gcd(n1,n2,n2);
	cout<<a;
	return 0;
}
