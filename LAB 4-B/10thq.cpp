#include<iostream>
using namespace std;
int fib(int n)
{
	if(n==1||n==2)
	{
		return 1;
	}
	else
	{
		return (fib(n-1)+fib(n-2));
	}
}

int main()
{
	int num,a;
	cout<<"Enter number ";
	cin>>num;
	a=fib(num);
	cout<<a;
	return 0;
	
}
