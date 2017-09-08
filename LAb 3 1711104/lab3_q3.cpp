//program to check whether a number is negative, positive or zero.

#include <iostream>
using namespace std ;

int main()
{ 
   int no1;
   cout<< "program to check whether a number is negative, positive or zero."<<endl;
   cout<< " Write any integer: " ;
   cin>> no1; 
   if (no1>0)
{
  cout<< no1 <<" is positive" ;
}
else if (no1<0)
{
  cout<< no1<<" is negative" ;
}
else{
  cout<<no1<<" is zero" ;
    }
  


return 0;
}

