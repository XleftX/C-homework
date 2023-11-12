#include <iostream>
using namespace std;
//定义最简单的move1函数
void move1(int n,char i,char j)
{
    cout<<n<<":"<<i<<"->"<<j<<endl;
}
void move(int n,char a,char b,char c)
{
    if(n==1)
    {
        move1(n,a,b);
    }
    else if(n==2)
    {
        move1(n-1,a,c);
        move1(n,a,b);
        move1(n-1,c,b);
    }
    else
    {
        move(n-1,a,b,c);
        move1(n,a,b);
        move(n-1,b,c,a);
    }
}
int main()
{
    int n;
    cin>>n;
    char a,b,c;
    cin>>a>>b>>c;
    move(n,a,b,c);
    return 0;
}