#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
  float m1, m2, m3, m4, m5;
  double total,avg,per;
  cout<<"Hello user"<<endl;
  cout<<"PROGRAM TO ENTER THE MARKS OF FIVE SUBJECTS AND CALCULATE TOTAL, AVERAGE AND PERCENTAGE\n \n";
  cout<<"Enter the marks in 5 subjects (out of 100): ";
  cin>>m1>>m2>>m3>>m4>>m5;
  total=m1+m2+m3+m4+m5;
  avg=total/5;
  per=(total/5);
  cout<<"\n \nThe total marks obtained is: "<<total;
  cout<<"\n \nThe average marks obtained is: "<<avg;
  cout<<"\n \nThe percentage obtained is: "<<per;
  return 0;
}
