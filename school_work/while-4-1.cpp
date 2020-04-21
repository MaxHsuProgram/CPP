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
    cout << "及格" << a << " ";
    cout << "不及格" << b << " ";
    if ( a > b )
    {
        cout << "及格多";
    }
    else if ( b < a )
    {
        cout << "不及格多";
    }
    else
    {
        cout << "一樣多";
    }
}