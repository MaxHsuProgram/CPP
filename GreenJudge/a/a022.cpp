#include<iostream>
using namespace std;
int main ()
{
    int n , m , a = 0;
    cin >> n >> m;
    while ( m > n )
    {
        n = n * 3;
        a++;
    }
    cout << a << endl;
}
