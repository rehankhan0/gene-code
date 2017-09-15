//Write a C++ program to find first and last digit of any number.
#include <iostream>
using namespace std;
 
int main() {
  int num=0;
  int dig=0,F=0,L=0;
  cout<<"Enter the number(INTEGER):\n";
  cin>>num;
  int num1=abs(num);
  L=num1%10;
  while(num1>0)
  { 
    F=num1%10;
    num1=num1/10;
    dig++;
  }
  cout<<"The first digit of "<<num<<" is "<<F<<" and last digit is "<<L;
	return 0;
}
