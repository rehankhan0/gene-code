//Write a C++ program to find maximum between two numbers.
#include <iostream>
using namespace std ;

int main()
{ 
   int no1 , no2 ;
   cout<<"program to find maximum between two numbers"<<endl;
   cout<< "write first No. " ;
   cin>> no1; 
   cout<< "write second No. ";
   cin>> no2 ;
   if (no1>no2){
  cout<< no1 <<"is greater than " <<no2 ;
   }else{
  cout<< no2<<" is greater than "<<no1 ;
   }

return 0;
}

