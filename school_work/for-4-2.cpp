#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
    int H,M;
    cin >> H >> M;
    if(H == 14)
    {
        if(M >= 20 && M <= 59)
        {
            cout << "YES";
        }
        else 
        {
            cout << "NO";
        } 
    }
    else if(H == 15)
    {
        if(M >= 0 && M <= 59)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else if(H == 16)
    {
        if(M >= 0 && M <= 40)
        {
            cout << "YES";
        }
        else 
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
    
}