#include <iostream>
#include <cmath>
 
using namespace std;
 
int convertdecimaltobinary(long long);
int main()
{
    long long decimalNumber;
 
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;
 
    cout << decimalNumber << " in deciaml = " << convertdecimaltobinary(decimalNumber) << " in binary ";
 
    return 0;
}
 
int convertdecimaltobinary(long long decimalNumber)
{
    int binaryNumber = 0,  i = 0;
    i = 1;
    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }
 
    return binaryNumber;
}
