#include<iostream>
using namespace std;
int main ()
{
    int candy = 0 , s = 0;
    while ( true )
    {
        cin >> candy;
        if ( candy == 0 )
        {
            break;
        }
        s = s + candy;
    }
    cout << s;
}