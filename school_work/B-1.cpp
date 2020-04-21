#include<iostream>
using namespace std;
int main ()
{
    long long int a = 0 , s = 1;
    while ( true )
    {
        cin >> a;
        if ( a == -1 )
        {
            break;
        }
        s = s * a;
    }
    cout << s;
}