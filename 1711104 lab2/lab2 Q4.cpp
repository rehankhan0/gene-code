#include <iostream>
using namespace std;

int main()
{ 
  int days=0,days1=0, years=0, weeks=0, lday=0;
  cout<<"Hello user"<<endl;
  cout<<"PROGRAM TO CONVERT DAYS INTO YEARS, WEEKS AND DAYS \n \n";
  cout<<"Enter the number of days to be converted: ";
  cin>>days;
  days1=days;
  years=days/365;
  days=days-365*years;
  weeks=(days)/7;
  lday=days-(weeks*7);
  cout<<"\n \n"<<days1<<" days can be written in the form of "<<years<<" year, "<<weeks<<" weeks and "<<lday<<" remaining days";
  return 0;
}
