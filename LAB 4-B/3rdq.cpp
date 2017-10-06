#include <iostream>
using namespace std;

int print(int num,int i){ 
	if(i<=num)
	{
	cout<<i<<endl;
	return print(num,(i+2));
	}
	else 
	{return 0;
	}
}

int main() 
{int n,x;
 char a;
	cout<<"Enter the maximum number ";
	cin>>n;
	cout<<"Enter the minimum number ";
	cin>>x;
	cout<<"Choose odd or even(o/e)";
	cin>>a;
	
	if(a=='e')
	{
		if ((x%2)==0)
		{
			print(n,x);
		}
		else
		{
		 print(n,(x+1));
		}
	}
	
	else if(a=='o')
	
	{ if((x%2)==0)
		{
		print(n,(x+1));
		}
	  else
	   {print(n,x);
	   }
	}
    return 0;
}
