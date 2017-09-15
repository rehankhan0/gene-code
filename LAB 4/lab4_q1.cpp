//Write a C++ program to find cube of any number using function.

#include <iostream>
using namespace std;
double cube(double a)
{
  double c=a*a*a;
  return c;
}
int main()
{
  double num;
  cout<<"Program to find cube of any number using function.\n";
  cout<<"\nEnter a number: ";
  cin>>num;
  double cube1=cube(num);
  cout<<"\nThe cube of the number is: "<<cube1;
  return 0;
}
