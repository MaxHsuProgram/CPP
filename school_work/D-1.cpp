#include<iostream>
using namespace std;
int main ()
{
    int boy = 0 , girl = 0 , num , count = 0;
    while ( count <= 9 )
    {
        cin >> num;
        if ( num == 1 )
        {
            boy++;
        }
        else 
        {
            girl++;
        }
        count++;
    }
    cout << "�k" << boy << " ";
    cout << "�k" << girl << " ";
    if ( boy > girl )
    {
        cout << "�k�h" ;
    }
    else if ( girl > boy )
    {
        cout << "�k�h";
    }
    else
    {
        cout << "�@�˦h";
    }
    
}