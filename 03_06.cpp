#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout<<"请输入方程ax\u00b2+bx+c=0中的abc："<<endl;
    double a,b,c,x1,x2;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    cout<<"c:";
    cin>>c;
    double delta=pow(b,2)-4*a*c;
    if(a==0)
    {
        cout<<"a不能为0";
    }
    else if(delta==0)
    {
        x1=x2=-b/(2*a);
        cout<<"x1=x2="<<x1;
    }
    else if(delta>0)
    {
        x1=(sqrt(delta)-b)/2*a;x2=(-sqrt(delta)-b)/2*a;
        cout<<"x1="<<x1<<' '<<"x2="<<x2;
    }
    else
    {
        cout<<"方程无根";
    }
    return 0;
}