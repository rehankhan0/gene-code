#include <iostream>
using namespace std;

int main() {
	int n,r,rev=0;
	cout<<"Enter a number\n";
	cin>>n;
	int num=n;
	while(n>0){
		r=n%10;
		n=n/10;
	            rev=rev*10+r;
	}
	if(rev==num)
	cout<<"The number is a palindrome\n";
	else 
	cout<<"The number is not a palindrome\n";
	
    return 0;
}
