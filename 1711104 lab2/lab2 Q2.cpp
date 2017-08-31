
#include <iostream>
using namespace std;

int main()
{ 
  double cel=0,fah=0;
  cout<<"Hello user "<<endl;
  cout<<"PROGRAM TO CONVERT TEMPERATURE IN CELCIUS TO FAHRENHEIT \n \n";
  cout<<"Enter the temperature in degree celcius: ";
  cin>>cel;
  fah=(((double)9/5)*cel)+32;
  cout<<"\n \nThe temperature in degree Fahrenheit is: "<<fah;
  return 0;
}
