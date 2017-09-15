#include <iostream>
using namespace std;
 
int main() {
 int num1, num2, lim, HCF=1;
  cout<<"\nProgram to find HCF of two numbers.";
  cout<<"\nENTER THE NUMBERS: ";
  cin>>num1>>num2;
  if(num1>num2)
  lim=num2;
  else
  lim=num1;
  for(int i=1;i<=lim;i++)
  {
   if(num1%i==0 && num2%i==0)
   {
     HCF=i;
   }
  }
  cout<<"\nThe HCF of "<<num1<<" and "<<num2<<" is: "<<HCF;	return 0;
}
