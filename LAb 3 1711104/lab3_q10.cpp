//Write a C++ program to check whether a character is uppercase or lowercase alphabet.

#include <iostream>
using namespace std;
int main() 
{
	char a;
        cout<<"Program to check whether a character is uppercase or lowercase alphabet.\n";
	cout <<"Enter a character\n";
	cin >>a;
	if (a>='a'&&a<='z')
	cout <<a <<" is a lowercase alphabet\n";
	else if (a>='A'&&a<='Z')
	cout <<a <<" is an uppercase alphabet\n";
	else
	cout <<"Invalid entry\n";
	return 0;
}
