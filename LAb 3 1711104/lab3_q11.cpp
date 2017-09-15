//Write a C++ program to input week day number and print week day.

#include <iostream>
using namespace std;
int main() {
int num;
cout <<"Program to input week day number and print week day.\n";
cout <<"Enter number of the day in a week\n";
cin >> num;
    	if (num == 1)
    	cout <<"Sunday\n";
    	else if (num == 2)
    	cout <<"Monday\n";
    	else if (num == 3)
    	cout <<"Tuesday\n";
    	else if (num == 4)
    	cout <<"Wednesday\n";
    	else if (num == 5)
    	cout <<"Thursday\n";
    	else if (num == 6)
    	cout <<"Friday\n";
    	else if (num == 7)
    	cout <<"Saturday\n";
        else 
        cout <<"Invalid choice\n";
    	return 0;
    }
