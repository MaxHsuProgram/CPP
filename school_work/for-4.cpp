    #include<iomanip>
    #include<iostream>
    using namespace std;
    int main()
    {
        long long int a,b,count = 0;
        cin >> a >> b;
        for(;a <= b;a++)
        {
            if(a % 2 != 0 && a % 3 != 0 && a % 5 != 0)
            {
                cout << a << " ";
                count++;
            }
        }
        cout << count << "­Ó";
    }