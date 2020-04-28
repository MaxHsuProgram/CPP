#include<iostream>
using namespace std;
int main()
{
    int a = 0,b = 0,i = 0,A[100] = {1},B[100] = {1};
    while(1)
    {
        cin >> a >> b;
        if(a == 0&&b == 0)
        {
            break;
        }
        A[i] = a;
        B[i] = b;
        i++;
    }
    i = 0;
    while(1)
    {
        if(A[i] == 1 && B[i] == 1)
        {
            break;
        }
        if(A[i] > B[i])
        {
            cout << "A" << A[i] - B[i];
        }
        else if(B[i] > A[i])
        {
            cout << "B" << B[i] - A[i]
        }
        else 
        {
            cout << 0;
        }
    }

}