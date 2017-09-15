#include <iostream>
using namespace std;
int main()
{
  int num=0;
  cout<<"\nENTER THE NUMBER: ";
  cin>>num;
  cout<<"\n \nThe factors of "<<num<<" are: ";
  for(int i=1;i<=num;i++)
  {
   if(num%i==0)
   cout<<"\n"<<i;
  }
  return 0;
}
