#include <iostream>
using namespace std;

int main()
{
        int input, decimalValue = 0, currentPower = 1, remainder;
        cin >> input;
        while (input != 0)
        {
                remainder = input % 10;
                decimalValue += remainder * currentPower;
                currentPower *= 2;
                input /= 10;
        }
        cout << decimalValue;
        return 0;
}