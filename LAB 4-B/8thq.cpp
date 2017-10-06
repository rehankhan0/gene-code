#include<iostream>
using namespace std;
int sumdig(int n,int s)
{
	s+=(n%10);
	if(n!=0)
	{
	 return sumdig((n/10),s);
	}
	else
	{
		return s;
	}
}

int main()
{int num,y;
	cout<<"Enter number ";
	cin>>num;
	y=sumdig(num,0);
	cout<<y;
	return 0;
}
