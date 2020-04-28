#include<iostream>
using namespace std;
int main ()
{
    long long int i = 4,num[i];
    while ( i >= 0 )
    {
        num[i] = 1;
        i--;
    }
    cin >> num[0] >> num[1];
    num[3] = num[0] - num[1];
    while ( num[0] > 0 )
    {
        num[2] = num[2] * num[0];
        num[0]--;
    }
    while ( num[3] > 0 )
    {
        num[4] = num[4] * num[3];
        num[3]--;
    }
    cout << num[2] / num[4] << endl;
}