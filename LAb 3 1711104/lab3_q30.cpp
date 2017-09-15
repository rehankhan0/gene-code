//Write a C++ program to print multiplication table of any number.
#include <iostream>
using namespace std;
 
int main() {
	int i,n=0; 
    cout<<"Enter the number\n";
    cin>>n;
    cout<<"The multiplication table goes like\n";
    for(i=1;i<=10;i++)
    {
      cout<<n<<" * "<<i<<" = "<<(n*i)<<"\n";
    }
	return 0;
}
