#include<iostream>
using namespace std;
int main ()
{
    int a;
    char name[55],i;

    cin >> name;
    for( i=0 ; name[i] != '\0' ; i=i+1 )
    {
        a = (int)name[i];
        cout << a << endl;
    }
   
   

    
}