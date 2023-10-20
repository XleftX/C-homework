#include <iostream>
using namespace std;
int main()
{
    cout<<"请输入你想输出的星号行数：";
    int n,a,b,c,d;
    cin>>n;
    a=n-1;
    b=1;
    while(n!=0)
    {
        for(c=a;c!=0;c--)
        {
            cout<<' ';
        }
        for(d=b;d!=0;d--)
        {
            cout<<"*";
        }
        cout<<endl;
        a--;n--;b+=2;
    }
    return 0;

}