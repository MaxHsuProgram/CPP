#include<iostream>
using namespace std;
int main ()
{
    long int a,b,s = 0;
    cin >> a >> b;
    if ( a < b )
    {
        while (a <= b)
        {
            if( a == b )
            {
                cout << a ;
                s = s + a;
                break;
            }
            else
            {
                cout << a << "+" ;
                s = s + a;
                a++;
            }
        }
    }
    else
    {
        while (b <= a)
        {
            if( a == b )
            {
                cout << a ;
                s = s + a;
                break;
            }
            else
            {
                    cout << a << "+" ;
                    s = s + a;
                    a--;
            }
        }
    }
    cout << "=" << s << endl;
}