#include <iostream>
using namespace std;

int print(int num,int i){ 
	if(i<=num)
	{
	cout<<i<<endl;
	return print(num,(i+1));
	}
	else 
	{return 0;
	}
}

int main() 
{int n;
	cout<<"Enter the number ";
	cin>>n;
	print(n,1);
    return 0;
}
