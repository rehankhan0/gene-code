//Write a C++ program to count number of digits in any number.

#include <iostream>
using namespace std;
int main() {
  int num=0,dig=0,num1;
  cout<<"Enter the number\n ";
  cin>>num;
  num1=num;
  while(num1>0)
  {
    num1=num1/10;
    dig++;
  }
  if(num!=0)
  {
    cout<<"The number of digits in "<<num<<" is "<<dig<<"\n";
  }
  else
  {
    cout<<"\n \nThe number of digits in "<<num<<" is 1\n";
  }
	return 0;
}
