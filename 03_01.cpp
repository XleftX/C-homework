#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"请输入a："<<endl;
    cin>>a;
    cout<<endl<<"请输入b："<<endl;
    cin>>b;
    if(a>b)
    {
        cout<<"a>b"<<endl;
    }
    else if(a==b)
    {
        cout<<"a=b"<<endl;
    }
    else
    {
        cout<<"a<b"<<endl;
    }
    return 0;
}