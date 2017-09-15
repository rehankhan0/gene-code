#include<iostream>
using namespace std;

main()
{
	int num;
	cout<<"\nEnter n value\t";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
  int j,f,r,sum=0,temp;
  temp=num;
  while(num)
  {
      j=1,f=1;
      r=num%10;
      while(i<=r)
	  {
        f=f*j;
        j++;
      }
      sum=sum+f;
      num=num/10;
  }
  if(sum==temp)
     cout << temp << " is a strong number\n";
}

	return 0;
}
