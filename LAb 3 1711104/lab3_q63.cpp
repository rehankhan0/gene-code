#include <iostream>
#include <cmath>

using namespace std;

int convertOctaltoBinary(long long octalNumber)
{
    int binaryNumber = 0, decimalNumber = 0, i = 0;

    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }

    return binaryNumber;
}

int main()
{
    long long octalNumber;

    cout << "Enter a octal number: ";
    cin >> octalNumber;

    cout << octalNumber << " in octal = " << convertOctaltoBinary(octalNumber) << " in binary ";

    return 0;
}
