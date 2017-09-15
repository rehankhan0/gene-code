//Write a C++ program to check whether a number is Armstrong number or not.4

#include <iostream>

using namespace std;

int main(){
   int num,sum=0,d,s;
   cout<<"Program to check whether a number is Armstrong number or not.\n";
   cout<<"Enter a number\n";
   cin>>num;
   int n=num;
   while(num!=0){
   	d=num%10;
   	s=d*d*d;
   	sum=sum+s;
   	num=(int)num/10;
   }
   if(sum==n)
   cout<<"The number is Armstrong number\n";
else{
     cout<<"The number is not Armstrong number\n";
}
 return 0;
}
