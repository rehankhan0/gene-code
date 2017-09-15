#include <iostream>
using namespace std;

int main(){
   int num,c,sum=0;
   cout<<"Enter a number\n";
   cin>>num;
   cout<<"The prime factors of the number are\n";
   for(int i=1;i<=num;i++){
   	c=0;
   	if(num%i==0){
   		c++;
   	}
   	if(c==1)
   	cout<<"\n"<<i;
   }
 return 0;
}
