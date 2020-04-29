#include <iostream>
#include<cmath>
using namespace std;
char peter[100] = {'\0'};
int main()
{
    int i = 0, end;
    cin >> peter;
    while(1){
        if(peter[i] == '\0')
        {
            break;
        }
        i++;
    }
    end = i - 1;
    int back = end / 2;
    int forward = end / 2 + 1;
    while(back != 0 && forward != end){
        if(peter[back] != peter[forward])
        {
            cout << "Error";
            return 0;
        }
        back--;
        forward++;
    }
    cout << "Correct";
}
