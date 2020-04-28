#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int n,k,i;
    cin >> n;
    for(i = 1;i <= n;i++)
    {
        for(k = 1;k <= i;k++)
        {
            cout << i;
        }
        cout << "\n";
    }
}