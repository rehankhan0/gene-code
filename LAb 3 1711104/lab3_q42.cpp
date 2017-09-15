#include <iostream>
using namespace std;

int main()
{
  int POW=1, EXP, BASE;
  cout<<"\nENTER THE BASE NUMBER AND EXPONENT: ";
  cin>>BASE>>EXP;
  for(int i=1;i<=EXP;i++)
  {
   POW*=BASE;
  }
  cout<<"\nThe power of "<<BASE<<" raised to "<<EXP<<" is "<<POW;
  return 0;
}
