#include <iostream> 
using namespace std; 

main()
{
	int n;
	cout<<"\nEnter n value\t";
	cin>>n;
	int i=1,sum=0;
    while(i<n)
	{
       if(n%i==0)
       sum=sum+i;
       i++; 
	}
 
if(sum==n)
    cout << i << " is a perfect number\n"; 

	return 0;
}
