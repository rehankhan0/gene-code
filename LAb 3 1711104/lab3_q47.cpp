#include <iostream>
using namespace std;

int main(){
   int num,c,i;
   cout<<"Enter a number\n";
   cin>>num;
   for(int i=1;i<num;i++){
   	if(num%i==0)
   	c++;
   }
  if(c==1)
  cout<<"The number is prime\n";
  else
  cout<<"The number is not prime\n";
 return 0;
}
