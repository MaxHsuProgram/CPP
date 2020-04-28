#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int n,k = 1,count = 0,i = 0;
    cin >> n;
    i = sqrt(n);
    for(k = 1;k <= i;k++)
    {
        if(n % k == 0)
        {
            count++;
        }
    }
    if(count == 1)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
}