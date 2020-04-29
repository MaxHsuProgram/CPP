#include <iostream>
#include<math.h>
using namespace std; 

int main()

{
    int n,k,num[100];
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        cin >> k;
        num[i] = k;
    }
    for(int i = n;i > 0;i--)
    {
        cout << num[i] <<" ";
    }
}