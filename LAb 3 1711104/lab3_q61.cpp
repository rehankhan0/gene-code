#include <iostream>
#include <cmath>

using namespace std;

int convertBinarytodecimal(long long binaryNumber)
{
    int  decimalNumber = 0, i = 0;

    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }

    
    return decimalNumber;
}
int main()
{
    long long binaryNumber;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    cout << binaryNumber << " in binary = " << convertBinarytodecimal(binaryNumber) << " in decimal ";

    return 0;
}
