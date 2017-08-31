#include <iostream>
using namespace std;

int main()
{ 
  double one=0, two=0, third=0;
  cout<<"Hello user"<<endl;
  cout<<"PROGRAM TO FIND THE THIRD ANGLE OF TRIANGLE PROVIDED TWO ANGLES \n \n";
  cout<<"Enter the FIRST ANGLE: ";
  cin>>one;
  cout<<"Enter the SECOND ANGLE: ";
  cin>>two;
  third=180-(one+two);
  cout<<"\n \nThe third angle of triangle is: "<<third;
  return 0;
}
