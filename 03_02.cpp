#include <iostream>
using namespace std;
int main()
{
    int n,a;
    a=0;
    cout<<"请输入一个整数："<<endl;
    cin>>n;
    do
    {
        cout<<n%10;
        n/=10;
        a++;
    }while(n!=0);
    cout<<endl<<a;
    return 0;
}