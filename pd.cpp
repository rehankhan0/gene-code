#include<iostream>
using namespace std;
int main()
{
 float a,b,c,x,r,s;
 cout<<"\n Enter the value of a: ";
 cin>>a;
 cout<<"\n Enter the value of b: ";
 cin>>b;
 cout<<"\n Enter the value of c: ";
 cin>>c;
 cout<<"\n Enter the value of x: ";
 cin>>x;
 r=(a*x*x)+(b*x)+c;
 s=(a*a*a*x*x)/12 + (b*x)/100 + c*c;
 cout<<"\n f(x)= "<<r;
 cout<<"\n g(x)= "<<s;
 return(0);
 }
