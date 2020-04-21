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
    if (count == 2)
    {
        cout << "為質數";
    }
    else
    {
        cout << "不為質數";
    }
    
}