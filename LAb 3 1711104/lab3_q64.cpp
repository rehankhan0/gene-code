#include <iostream>
#include <cmath>

using namespace std;

int convertOctaltodecimal(long long octalNumber)
{
    int decimalNumber = 0, i = 0;

    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

        return decimalNumber;
}

int main()
{
    long long octalNumber;

    cout << "Enter a octal number: ";
    cin >> octalNumber;

    cout << octalNumber << " in octal = " << convertOctaltodecimal(octalNumber) << " in decimal ";

    return 0;
}
