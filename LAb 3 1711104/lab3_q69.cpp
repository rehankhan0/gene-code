#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

int hex_to_bin(char hex[])
{
	int i,len, dec=0, bin=0;
	for(len=0; hex[len]!='\0'; len++);
	for(i=0; hex[i]!='\0'; i++,len--)
	{
		if(hex[i]>='0' && hex[i]<='9')
		{
			dec= dec + (hex[i]-'0')*pow(16,len-1);
		}
		if(hex[i]>='A' && hex[i]<='F')
		{
			dec = dec + (hex[i]-55)*pow(16,len-1);
		}
		if(hex[i]>='a' && hex[i]<='f')
		{
			dec = dec + (hex[i]-87)*pow(16,len-1);
		}
	} 
	i=1;
	while(dec!=0)
	{
		bin = bin + (dec%2)*i;
		dec = dec/2;
		i = i*10;
	}
	return bin;
}
main()
{
	
	char hex[20],c;
	int n;
	cout<<"\nEnter Hexadecimal Number : ";
	cin>>hex;
	cout<<"\nEquivalent binary Value = "<<hex_to_bin(hex);
	return 0;
}
