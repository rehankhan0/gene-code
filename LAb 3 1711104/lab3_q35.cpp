//Write a C++ program to calculate sum of digits of any number.
#include <iostream>
using namespace std;

int main() {
	int n,dig,sum=0;
	cout<<"Enter a number\n";
	cin>>n;
	while(n>0){
	dig=n%10;
	sum=sum+dig;
	n=n/10;
	}

cout<<"The sum of the digits is "<<sum;
    return 0;
}
