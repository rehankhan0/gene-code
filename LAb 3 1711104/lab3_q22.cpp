//Write a C++ program to print all natural numbers from 1 to n. - using while loop


#include <iostream>
using namespace std;
int main() {
	int n,i=1;
	cout <<"Enter any number n\n";
	cin >> n;
	while(i<=n){
	cout<<i<<"\n";
	i=i+1;
	}
	return 0;
}
