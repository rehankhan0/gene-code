#include <iostream> 
using namespace std; 

main()
{
	int n;
	cout<<"\nEnter n value\t";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
    int j=1,sum=0;
    while(j<n)
	{
       if(n%i==0)
       sum=sum+j;
       j++; 
	}
 
if(sum==n)
    cout << j << " is a perfect number\n"; 
}
	return 0;
}
