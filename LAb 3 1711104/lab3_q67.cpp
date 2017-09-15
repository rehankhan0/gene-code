#include <iostream>
#include <cmath>

using namespace std;

int convertdecimaltoOctal(long long);
int main()
{
    long long decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    cout << decimalNumber << " in deciaml = " << convertdecimaltoOctal(decimalNumber) << " in octal ";

    return 0;
}

int convertdecimaltoOctal(long long decimalNumber)
{
    int octalNumber = 0,  i = 0;
    i = 1;
    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}
