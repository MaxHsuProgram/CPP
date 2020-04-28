#include<iostream>
using namespace std;

int main()
{
    int n,k = 1,i = 0,num[100] = {0},s = 0;   //s為總和,num[]為因數陣列
    cin >> n;
    for(k = 1;k <= n;k++)
    {
        if(n % k == 0)
        {
            num[i] = k;
            i++;
        }
    }
    while(1)
    {
        if(i < 0)
        {
            break;
        }
        s = s + num[i]; 
        i--;
    }
    s = s - n;
    if(s > n)
    {
        cout << "Abundant";
    }
    else if(s < n)
    {
        cout << "Deficient";
    }
    else if(s == n)
    {
        cout << "Perfect";
    }
    cout << endl;
}