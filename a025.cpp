#include<iostream>
using namespace std;
int main ()
{
    int n = 0,a = 0;
    cin >> n;
    while(n > 0)
    {
        a = n % 10;
        n = n / 10;
        cout << a;
    }
}