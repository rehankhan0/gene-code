//Write a C++ program to input any alphabet and check whether it is vowel or consonant.

#include <iostream>

using namespace std;

int main()
{ 
  char ch;
   cout<< "Program to input any alphabet and check whether it is vowel or consonant."<<endl;
   cout<< " Write any charachter" ;
   cin>>ch;
	
       if(ch=='a'||'e'||'i'||'o'||'u')
	{
		cout<<ch<<" is vovel";
	}
	else
	{
		cout<<ch<<" is consonant";
	}
  return 0;
}
