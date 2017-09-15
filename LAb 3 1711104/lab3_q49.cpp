#include <iostream>
using namespace std;

int main(){
   int num,c,sum=0;
   cout<<"Enter a number\n";
   cin>>num;
   for(int j=1;j<=num;j++){
   	c=0;
   for(int i=1;i<j;i++){
   	if(j%i==0)
   	c++;
   }
  if(c==1)
  sum=sum+j;
   }
   cout<<"sum of the prime numbers="<<sum;
 return 0;
}
