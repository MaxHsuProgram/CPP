// prog7_19, 命令列引數的使用
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
   int a=atoi(argv[1]);    // 將命令列引數轉換成數值 
   int b=atoi(argv[2]);
   cout << a << "+" << b << "=" << a+b << endl;  
   system("pause");
   return 0;
}
