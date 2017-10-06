#include<iostream>
using namespace std;

int lcm(int a,int b,int i)
{
	if((i%a)==0&&(i%b==0))
	{
		return i;
	}
	else 
	{
		return lcm(a,b,(i+1));
	}
}

int main()
{
	int n1,n2,a;
	cout<<"Enter first number ";
	cin>>n1;
	cout<<"Enter second number ";
	cin>>n2;
	
	a=lcm(n1,n2,n2);
	cout<<a;
	return 0;
}
