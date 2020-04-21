#include <iostream>
using namespace std; 
int main()
{
    long long int n,a = 0;
    cin >> n;
    while(1)
    {
        if(n >= 5)
        {
            n = n - 4;
            a++;
        }
        else
        {
            break;
        }
    }
    cout << n + a * 5;
}
