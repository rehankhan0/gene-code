#include <iostream>
using namespace std;

int print(int num,int i,int s){ 
	if(i<=num)
	{
	s+=i;
	return print(num,(i+2),s);
	}
	else 
	{return s;
	}
}

int main() 
{int n,x,y;
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
			y=print(n,x,0);
		}
		else
		{
		 y=print(n,(x+1),0);
		}
	}
	
	else if(a=='o')
	
	{ if((x%2)==0)
		{
		y=print(n,(x+1),0);
		}
	  else
	   {
	    y=print(n,x,0);
	   }
	}
	cout<<y;
    return 0;
}
