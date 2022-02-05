#include <iostream>

using namespace std;

int main()
{
    int quantity, n, sum = 0, average;
    cin >> quantity;
    
    for (int i = 1; i <= quantity; i++)
    {
        cin >> n;
        sum += n;
    }
    average = sum / quantity;
    cout << average;

    return 0;
}