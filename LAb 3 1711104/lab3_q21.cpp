//Write a C++ program to input electricity unit charges and calculate total electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill
 
#include <iostream>
    using namespace std;
    int main() {
          int u,u1,u2;
          double cost;
          cout <<"Enter the number of units\n";
          cin >>u;
          if (u<=50)
          {
          	cost = u*0.5;
          }
          else if (u<=150)
          {
          	cost = 25 + (u-50)*0.75;
          }
          else if (u<=250)
          {
          	cost = 25+75+(u-150)*1.2;
          }
          else if (u>250)
          {
          	cost = 25+75+120+(u-250)*1.5;
          }
          cout <<"Total cost of electricity = " <<cost;
          return 0;
    }
