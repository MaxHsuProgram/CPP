#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int n,i,a = 1,j,k,b;
    cin >> n;
    for(i = 1,j = n - 1;i <= n;i++,j--)
    {
        for(k = 1;k <= j;k++)
        {
            cout << "_";
        }
        for(b = 1;b <= a;b++)
        {
            cout << i;
        }
        a += 2;
        cout << "\n";
    }
}