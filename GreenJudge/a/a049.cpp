#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,num = 1;
    char a[1] = {'\0'};
    a[0] = '@';
    a[1] = '-';
    cin >> n;
    for(i = 1;i <= n;i++)
    {
        for(j = 1;j <= n;j++)
        {
            if(i % 3 == 1)
            {
                if(j % 3== 1)
                {
                    cout << '@';
                }
                else 
                {
                    cout << '-';
                }
            }
            else if(i % 3 == 2)
            {
                if(j % 3 == 2)
                {
                    cout << '@';
                }
                else 
                {
                    cout << '-';
                }
            }
            else if(i % 3 == 0)
            {
                if(j % 3 == 0)
                {
                    cout << '@';
                }
                else 
                {
                    cout << '-';
                }
            }
        }
        cout << "\n";
    }
}