#include<iostream>
using namespace std;
int main ()
{
    int a , s = 0;
    cin >>a;
    while ( true )
    {
        s = s + a % 10;
        a = a /10;
        if ( a == 0 )
        {
            break;
        }
    }
    cout << s;
}