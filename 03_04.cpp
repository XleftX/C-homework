#include <iostream>
using namespace std;
int main()
{
    cout<<"请输入你想输出的星号行数：";//用户控制想要输出的行数
    int n,a,b,c,d;
    cin>>n;
    a=n-1;
    b=1;
    while(n!=0)
    {
        for(c=a;c!=0;c--)//将变量a、c分隔开，a表示每行需要空格的个数c表示cout循环的次数
        {
            cout<<' ';
        }
        for(d=b;d!=0;d--)//将变量b、的、分开，使其不会影响到各自的加减
        {
            cout<<"*";
        }
        cout<<endl;
        a--;n--;b+=2;
    }
    return 0;

}