#include <iostream>
using namespace std; 
int main()
{
    int A[100],B[100],i = 1,n = 0;
    cin >> n;
    for(i = 1;i <= n;i++)
    {
        cin >> A[i] >> B[i];
    }
    for(i = 1;i <= n;i++)
    {
        if(A[i] > B[i])
        {
            cout << "Case " << i << ": " << "A " << A[i] - B[i] << endl;
        }
        else if(A[i] < B[i])
        {
            cout << "Case " << i << ": " << "B " << B[i] - A[i] << endl;
        }
        else
        {
            cout << "Case " << i << ": " << 0 << endl;
        }
        
    }
}
