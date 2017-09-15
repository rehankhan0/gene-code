//Write a C++ program to input month number and print number of days in that month.
#include <iostream>
using namespace std;    
int main() {     
        int m;
        cout<<"Program to input month number and print number of days in that month.\n";
        cout <<"Enter the month number\n";
        cin >>m;
        if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        cout <<"The month has thirty one days\n";
        else if (m==2)
        cout <<"The month has twenty eight days\n";
        else 
        cout <<"The month has thirty days\n";
    	return 0;
    }
