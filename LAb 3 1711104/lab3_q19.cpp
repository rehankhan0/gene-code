//Write a C++ program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
//Percentage >= 90% : Grade A
//Percentage >= 80% : Grade B
//Percentage >= 70% : Grade C
//Percentage >= 60% : Grade D
//Percentage >= 40% : Grade E
//Percentage < 40% : Grade F


#include <iostream>
    using namespace std;
    int main() {
    	double m,p,c,b,cs,perc,grade,tot;
        cout<<"Program to input marks of five subject and calculate percentage and grade.\n";
    	cout <<"Enter marks in maths, physics, chemistry, biology and computers\n";
    	cin >>m>>p>>c>>b>>cs;
    	tot = (m+p+c+b+cs);
    	perc = (tot/500)*100;
    	cout <<"The percentage is = "<<perc <<"%" <<endl;
    	if (perc>=90)
    	cout <<"The grade = A";
    	else
    	if (perc>=80)
    	cout <<"The grade is = B";
    	else
    	if (perc>=70)
    	cout <<"The grade = C";
    	else
    	if (perc>=60)
    	cout <<"The grade = D";
    	else
    	if (perc>=40)
    	cout <<"The grade is =E";
    	else
    	if (perc<40)
    	cout <<"The grade = F";
    	return 0;
    }
