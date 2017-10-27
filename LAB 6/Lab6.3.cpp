#include <iostream>
using namespace std;

int main()
{
	int i,n,j;
	n = 0;
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int *p = &arr[0];
	cout<<"Output using index method is = \n";
	for (i = 0; i<10; i++)
	{
		n = arr[i];
		cout<<n <<"\n";
	}
	cout <<"Output using pointer method is = \n";
	for (j = 0; j<10;j++)
	{
		cout<<*(p+j)<<"\n";
	}
	
	return 0;
	
	
}
