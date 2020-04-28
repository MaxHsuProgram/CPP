#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
    long long int n,i = 0,k = 1;
    cin >> n;
    for(i = 1;i <= n;i++)
    {
        k = k * 13;
        k = k % 100;
    }
    cout << k / 10;
}
