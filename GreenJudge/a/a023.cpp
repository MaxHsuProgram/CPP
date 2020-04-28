#include<iostream>
using namespace std;
int main ()
{
    int n , a = 1;
    cin >> n;
    while (n != 1)
    {
        if (n % 2 == 1)
        {
            n = (n * 3)+ 1;
        }
        else if ((n % 2) == 0) 
        {
            n = n / 2;
        }
        else if (n == 1)
        {
            break;
        }
        a++;
    }
    cout << a << endl;
}