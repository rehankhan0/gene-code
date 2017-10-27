#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    char  str[20], *p;

    cout << "Input about 10 characters of string\n";
    cin >> str;
    int len=0;
    for(;str[len]!='\0';len++);
    p=str;
    cout<<"The name is: "<<p<<"\n";
    for(int i=0;i<len;i++)
    {
    	cout<<p<<endl;
    	p++;
    }
    
    return (0);
}
