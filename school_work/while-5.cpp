#include<iostream>
using namespace std;
int main ()
{
    long long int i = 0, num[100] = {1}, s = 1;
    while ( true )
    {
        cin >> num[i];
        if ( num[i] == 0 )
        {
            break;
        }
        s = s * num[i];
        i++;
    }
    cout << s;

}