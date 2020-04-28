#include <iostream>
#include<math.h>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double x1 = 0,x2 = 0,y1 = 0,y2 = 0,distance = 0;
    cin >> x1 >> y1 >> x2 >> y2;
    distance = sqrt( pow( x1 - x2 , 2 ) + pow( y1 - y2 , 2 ) );
    cout << fixed << setprecision(3) << distance;
    return 0;
}