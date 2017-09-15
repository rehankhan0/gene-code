#include <iostream>
using namespace std;

int main() {
	long int b,a,k=0,s[100];
	cout<<"\n enter the binary no\n";
	cin>>b;
	a=b;

	while(a>0)
	{
		a=a/10;
		k++;
	}
	a=b;
	
	for(int i=k-1;i>=0;i--)
	{
	    s[i]=a%10;
	    a=a/10;
	}
	
	
	for(int i=0;i<k;i++)
	{
		if(s[i]==0)
		s[i]=1;
		else
		s[i]=0;
	}
	cout<<"\n";	
	for(int i=0;i<k;i++)
	{
		cout<<s[i];
	}
	
	
	return 0;
}
