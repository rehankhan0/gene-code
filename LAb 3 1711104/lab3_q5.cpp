//C++ program to check whether a number is even or odd.


#include <iostream>
using namespace std ;

int main()
{ 
   int no1;
   cout<< "Write a C++ program to check whether a number is even or odd."<<endl;
   cout<< " Write any integer: " ;
   cin>> no1; 
   if (no1%2==0)
{
  cout<< no1 <<" is even" ;
}

else{
  cout<<no1<<" is odd" ;
    }
  


return 0;
}
