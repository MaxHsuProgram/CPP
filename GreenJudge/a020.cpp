#include<iostream>
using namespace std;
int main ()
{
    int a , b , c = 0;
    cin >> a >> b;
    if ( ( a % 2 ) == 1 )
    {
        c = c + 100;    
    }
    if ( b == 2 || b == 5 || b == 8 )
    {
        c = c + 200;
    }
    if ( a == b )
    {
        c = c + 50;
    }
    cout << c << endl;
}
