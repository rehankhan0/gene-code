//Write a C++ program to input basic salary of an employee and calculate its Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%
 
#include <iostream>
 using namespace std;
 int main() {
    	double sal,gross,hra,da;
    	cout <<"Enter the salary\n";
    	cin >>sal;
    	if(sal<=10000)
    	{
    		hra = 0.2*sal;
    		da = 0.8*sal;
    	}
    	else if(sal<=20000)
    	{
    		hra = 0.25*sal;
    		da = 0.9*sal;
    	}
    	else if(sal>20000)
    	{
    		hra = 0.3*sal;
    		da = 0.95*sal;
    	}
    	gross = sal+hra+da;
    	cout <<"Gross income = "<<gross<<"\n";
    	return 0;
    }
