#include<iostream>
using namespace std;
int main ()
{
    int count = 0 , a = 0 , b = 0;
    double score = 0;
    while ( count <= 7 )
    {
        cin >> score;
        if ( score >= 60.0 && score <= 100.0 )
        {
            a++;
        }
        else if ( score < 60.0 && score >= 0.0 )
        {
            b++;
        }
        count++;
    }
    cout << "�ή�" << a << " ";
    cout << "���ή�" << b << " ";
    if ( a > b )
    {
        cout << "�ή�h";
    }
    else if ( b < a )
    {
        cout << "���ή�h";
    }
    else
    {
        cout << "�@�˦h";
    }
}
