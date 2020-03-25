#include<iostream>
using namespace std;
int main ()
{
    int a = 0, i = 0, c = 0, b = 0, d = 1, S1 = 0, num2[10], S2 = 0, e = 0,f = 0, g = 0, h = 1,l = 0;
    int num[10];
    char name[55];

    cin >> name;

    for (f = 0; f <= 10; f++)
    {
        num[f] = -1;
        num2[f] = -1;
    }

    f = 0;

    for ( i=0 ; name[i] != '\0' ; i=i+1 )
    {
        a = ( int )name[i];
        num[c] = a - 48;
        c++;
    }

    g = b;

    while ( true )
    {
        if ( num[b] == -5 )
        {
            break;
        }
        else if ( num[b] == -3 )
        {
            break;
        }
        else if ( num[b] == -6 )
        {
            break;
        }
        else
        {
            b++;
        }
    }

    g = b;
    l = b;


    while ( true )
    {
        b--;
        num[b] = num[b] * d;
        S1 = S1 + num[b];
        d = d * 10;
        if ( b == 0 )
        {
            break;
        }
    }

    while ( num[g] != -1 )
    {    
        num2[e] = num[g];
        e++;
        g++;
    }

    e = e - 1;

    while ( e > 0 )
    {
        num2[e] = num2[e] * h;
        S2 = S2 + num2[e];
        h = h * 10 ;
        e--;
    }

    if ( num[l] == -5 )
    {
        cout << S1 + S2 << endl;
    }
    
    else if ( num[l] == -3 )
    {
        cout << S1 - S2 << endl;
    }
    
    else if ( num[l] == -6 )
    {
        cout << S1 * S2 << endl;
    }
}