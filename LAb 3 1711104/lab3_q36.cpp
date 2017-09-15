#include <iostream>
using namespace std;

int main() {
	int n,dig,pro=1;
	cout<<"Enter a number\n";
	cin>>n;
	while(n>0){
	dig=n%10;
	pro=pro*dig;
	n=n/10;
	}

cout<<"The product of the digits is "<<pro;
    return 0;
}
