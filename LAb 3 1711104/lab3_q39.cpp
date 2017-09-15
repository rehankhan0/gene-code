#include <iostream>
using namespace std;

int main() {
	int n,num,p,i,c;
	cout<<"Enter a number\n";
	cin>>n;
	for(i=0;i<=9;i++){
	            num=n;
	            c=0;
		while(num>0){
		int d=num%10;
		if(d==i){
			c++;
			p=d;
		}
		num=num/10;
		}
		if(c>0)
		cout<<"The frequency of "<<p<<" is "<<c<<"\n";
	}
return 0;
}
