//Write a C++ program to find maximum between three numbers.
#include <iostream>
using namespace std ;

int main()
{ 
   int no1 , no2 ,no3 ;
   cout<< "program to find maximum between three numbers."<<endl;
   cout<< "write first No. " ;
   cin>> no1; 
   cout<< "write second No. ";
   cin>> no2 ;
   cout<< "write thirf No. " ;
   cin>> no3; 
   if (no1>no2 && no1>no3)
{
  cout<< no1 <<"is greatest" ;
}
else if (no2>no1 && no2>no3)
{
  cout<< no2<<" is greatest" ;
}
else{
  cout<<no3<<" is greatest" ;
    }
  


return 0;
}

