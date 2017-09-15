#include <iostream>
using namespace std;
int main()
{
  int num=0,f=1;
  cout<<"\nENTER THE NUMBER: ";
  cin>>num;
  for(int i=1;i<=num;i++)
  {
   if(num%i==0)
   f=f*i;
  }
  cout<<"\nFactorial is "<<f;
  return 0;
}
