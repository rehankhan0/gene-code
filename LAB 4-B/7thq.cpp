#include<iostream>
#include<cmath>
using namespace std;
int rev(int n,int t,int s)
{	int x;
	x=(n%10)*(t);
	s+=x;
	if(t!=0)
	{
	 return rev((n/10),(t/10),s);
	}
	else
	{
		return s;
	}
}

int main()
{int num,a=0,n,y;
	cout<<"Enter number ";
	cin>>num;
	n=num;
	while(n!=0)
	{
	 n/=10;
	 a++;
	}
	a=pow(10,(a-1));
	y=rev(num,a,0);
	if(y==num)
	{
		cout<<"It is a palindrome";
	}
	else
	{
		cout<<"It is not a palindrome";
	}
	return 0;
}


