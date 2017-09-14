//Write a C++ program to check whether a character is alphabet or not.
#include <iostream>

using namespace std;

int main()
{ 
  char ch;
   cout<< "Program to check whether a character is alphabet or not."<<endl;
   cout<< " Write any charachter" ;
   cin>>ch;
	
       if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
	{
		cout<<ch<<" is an alphabet";
	}
	else
	{
		cout<<ch<<" is not an alphabet";
	}
  return 0;
}
