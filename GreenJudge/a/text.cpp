#include <iostream>
#include<math.h>
using namespace std; 

int main()

{
    double a=0 , b = 0 , x = 0 , y = 0;
    
    cin>>a>>b;

    x = log10(a);

    y = b * x;

    cout << (int)floor(y) + 1;
}