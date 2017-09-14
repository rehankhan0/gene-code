//program to check whether a number is divisible by 5 and 11 or not.


#include <iostream>
using namespace std ;

int main()
{ 
   int no1;
   cout<< "Program to check whether a number is divisible by 5 and 11 or not."<<endl;
   cout<< " Write any integer: " ;
   cin>> no1; 
   if (no1%5==0)
{
  cout<< no1 <<" is divisible by 5" ;
}
else if (no1%11==0)
{
  cout<< no1<<" is divisible by 11" ;
}
else{
  cout<<no1<<" is not divisible 5 or 11" ;
    }
  


return 0;
}
