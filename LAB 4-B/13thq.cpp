#include <iostream>
using namespace std;


int first7(int *aptr, int n) //copied from internet as i don't fully understand how arrays work
{
    if(n == 0)
	{
        return 0;
    }
      cout<<*aptr;
    first7(aptr+1,n-1);
  
    return 0;


}
int main()
{
    int arr[50],n;
    cin>>n;
    for(int i=0; i<n; i++)
	{
        cin>>arr[i];
    }
    first7(arr, n);
    return 0;
}
