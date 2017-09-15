#include <iostream>
using namespace std;

int main(){
   int n,d,s;
   cout<<"Enter a number\n";
   cin>>n;
for(int i=1;i<=n;i++){
   	int sum=0;
   	int num=i;
   while(num!=0){
   	d=num%10;
   	s=d*d*d;
   	sum=sum+s;
   	num=num/10;
   }
   if(sum==i)
   cout<<"\n"<<i;
   }
 return 0;
}
