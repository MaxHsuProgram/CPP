#include<iostream>
using namespace std;
int main ()
{
    long int a,b,s = 0;
    cin >> a >> b;
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
    cout << "=" << s << endl;
}