#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;
    //123
    for (int i = 0; i < 10; i++)
    {
        cout << "The frequency of " << i << " = ";
        int temp = number;
        int remainder = 0;
        int repetitions = 0;
        while (temp != 0)
        {
                remainder = temp % 10;
                if(remainder == i){
                    repetitions++;
                }
                temp /= 10;
        }
        cout << repetitions << endl;
    }

    return 0;
}