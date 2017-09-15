//Write a C++ program to check whether a number is even or odd using functions.
#include <iostream>
using namespace std;
int evenodd(int num){
	if(num%2==0)
	return 1;
	else
	return 0;
}
int main() {
int n;
cout<<"Enter a number\n";
cin>>n;
if(evenodd(n)==1)
cout<<"The number is even\n";
else 
cout<<"The number is odd\n";
	return 0;
}
