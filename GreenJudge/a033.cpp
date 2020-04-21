#include <iostream>
using namespace std;
int main()
{

    int a = 0, i = 0, b = 0;
    int num[10] = {0};
    char output[11] = {'|','_','_','_','_','_','_','_','_','|'};

    cin >> a;

    b = a;

    for ( i = 0 ; ; i++ )
    {
        num[i] = a % 10;
        if ( a / 10 == 0 )
        {
            break;
        }
        a = a / 10;
    }
    
    for ( i = 0,a = 8 ; a >= 1 ; a--,i++ )
    {
        output[a] = num[i] + '0';
    }

    if ( b > 9999 )
    {
        output[1] = '_';
        output[2] = '_';
        output[3] = '_';
        output[4] = '_';
    }

    else  
    {
        i = 1;
        while ( output[i] == '0' )
        {
            output[i] = '_';
            i++;
        }
    }
    for ( i = 0 ; i <= 9 ; i++ )
    {
        cout << output[i];
    }
}