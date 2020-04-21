#include<iostream>
using namespace std; 
int main()
{
    int i,n,count = 0;
    cin >> n;
    for(i = 1;i <= n;i++)
    {
        if(n % i == 0)
        {
            cout << i << " ";
            count++;
        }
    }
    cout << count;
}