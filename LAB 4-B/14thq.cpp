#include <iostream>
using namespace std;


int first7(int *aptr, int n,int s) //I made a few modifications to the previous problem(converted cout to sum)(still dont fully understand arrays)
{
   if (n!=0)
   {
		s+=(*aptr);
    	return  first7(aptr+1,n-1,s);
   }
   else
   {
   	return s;
   }

}
int main()
{
    int arr[50],n,y;
    cin>>n;
    for(int i=0; i<n; i++)
	{
        cin>>arr[i];
    }
    y=first7(arr, n,0);
    cout<<y;
    return 0;
}
