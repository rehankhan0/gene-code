#include <iostream>
using namespace std;

int sum(int num,int i,int y){ 
	if(i<=num)
	{y+=i;
	
	return sum(num,(i+1),y);
	}
	else 
	{return y;
	}
}

int main() 
{int n,s;
	cout<<"Enter the number ";
	cin>>n;
	s=sum(n,1,0);
	cout<<s;
    return 0;
}
