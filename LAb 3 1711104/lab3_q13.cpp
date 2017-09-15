//Write a C++ program to count total number of notes in given amount.
#include <iostream>
using namespace std;
int main(){
int amt,a=0,b=0,c=0,d=0,e=0,f=0,r=0;
cout<<"Program to count total number of notes in given amount.\n";
cout<<"Enter amount\n";
cin >> amt;
if(amt-2000 >= 0)
{
a=amt/2000;
amt=amt%2000;
}
if(amt-500 >= 0)
{
b=amt/500;
amt=amt%500;
}
if(amt-100>= 0)
{
c=amt/100;
amt=amt%100;
}
if(amt-50>= 0)
{
d=amt/50;
amt=amt%50;
}
if(amt-20>=0)
{
e=amt/20;
amt=amt%20;
}
if(amt-10>=0)
{
f=amt/10;
amt=amt%10;
}
r=amt;
cout<<"The denominations are "<<a<<" * 2000\n"<<b<<" * 500\n"<<c<<" * 100\n"<<d<<" * 50\n"<<e<<" * 20\n"<<f<<" * 10\n"<<"And "<<r<<"\n";
return 0;
}

