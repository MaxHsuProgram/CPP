#include<iostream>
using namespace std;
int main ()
{
    float n = 0;
    int b = 0,c = 0,i = 0;
    while ( true )
    {
    	if ( i == 7 )
    	{
    		break;
		}
    	cin >> n;
    	if ( n >= 60.0 && n <=100.0 )
    	{
    		b++;
		}
		else if ( n >= 0.0 && n < 59.0 )
		{
			c++;
		}
		i++;
	}
	cout << "??????" << b << " ";
	cout << "�???????" << c << " ";
	if ( b > c )
	{
		cout << "?????��??"; 
	} 
	else if ( b < c )
	{
		cout << "�??????��??";  
	}
	else
	{
		cout << "�?�?�?"; 
	}
	 
}
