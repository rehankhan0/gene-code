//C++ program to check whether a number is even or odd.


#include <iostream>
using namespace std ;

int main()
{ 
   int year;
   cout<< "Program to check whether a year is leap year or not."<<endl;
   cout<< " Write any year: " ;
   cin>> year; 
   if (year%4==0)
{
  cout<< year <<" is leap year" ;
}

else{
  cout<<year<<" is not a leap year" ;
    }
  


return 0;
}
