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
    cout << "男" << boy << " ";
    cout << "女" << girl << " ";
    if ( boy > girl )
    {
        cout << "男多" ;
    }
    else if ( girl > boy )
    {
        cout << "女多";
    }
    else
    {
        cout << "一樣多";
    }
    
}