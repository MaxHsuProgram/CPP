#include <iostream>
using namespace std; 
int main()
{
    int a = 0,b = 0,i = 0,k = 0,A[100] = {0},B[100] = {0};
    while(1)
    {
        cin >> a >> b;
        if(a == 0 && b == 0)
        {
            break;
        }
        A[i] = a;
        B[i] = b;
        i++;
    }
    k = i; 
    for(i = 0;i <= k - 1;i++)
    {
        if (A[i] > B[i])
        {
            cout << "A" << " " << A[i] - B[i] << endl;
        }
        else if(A[i] < B[i])
        {
            cout << "B" << " " << B[i] - A[i] << endl;
        }
        else 
        {
            cout << 0 << endl;
        }
    }
}