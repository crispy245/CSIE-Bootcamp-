#include <iostream>
using namespace std;

int main()
{
   int n, sum=0;
   for(int i=100; i<=200; i++)
   {
       if(i % 9 == 0){
           cout << " " << i;
           sum+=i;
       }
   }
   cout<< endl <<"The sum :"<<sum<<endl;
   return 0;
}