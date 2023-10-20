#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    for(int n=200;n<=300;n++)
    {
        int i;
        for(int a=2;a<sqrt(n);a++)//遍历2~sqrt（n）
        {
            i=n%a;
            if(i==0)
            {
                break;
            }//如果找到因数就停止for循环
        }
        if(i)//这里的i应该是上面的for循环到最后依然没有找到i==0的情况所以是最后n%(sqrt(n)-1)的值
        {
            cout<<n<<endl;//输出该质数
        }
    }
    return 0;
}