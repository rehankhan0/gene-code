//Write a C++ program to swap first and last digits of any number.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n,newno,fd,p,ld,d=0;
	cout<<"Enter a number\n";
	cin>>n;
	int num=n;
	while(n>0){
	n=n/10;
	d++;
	}
	p=pow(10,(d-1));
	fd=(int)num/p;
	ld=num%10;
	num=num-(fd*p);
	num=num/10;
	newno=ld*p+num*10+fd;
    cout<<"\nNumber after swapping first and last digit: "<<newno;

    return 0;
}
