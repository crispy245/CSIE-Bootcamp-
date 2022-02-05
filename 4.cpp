#include <iostream>
using namespace std;

int main()
{
    char n;
    for (n = '0'; n <= 'z'; n++)
    {
        cout << n << " - " << int(n) << endl;
    }
    cout<<endl;
    int i;
    for(i = 48; i <= 122; i++){
        cout<<(char)i<<" - "<< n <<endl;
    }
    return 0;
}

