#include <iostream>
using namespace std;
 
int main()
{
  int i;
  char ch=0;
  cout<<"\nThe ASCII characters are as follows: ";
  for(i=0;i<256;i++)
  {
   cout<<"\n"<<i<<"\t"<<ch;
   ch++;
  }
  return 0;
}
