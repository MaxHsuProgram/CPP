#include<iostream>
using namespace std;
int main ()
{
    int n, a = 0, num[a], s = 0;
    cin >> n;
    while (n > 0)
    {
        num[a] = n % 10;
        n = n / 10;
        s = s + num[a];
        
        a++;
    }
    cout << s <<endl;
}