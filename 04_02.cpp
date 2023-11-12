#include <iostream>
using namespace std;
int f(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 0;
    }
    else
    {
        return f(n-1)+f(n-2);
    }
}
int main()
{
    int i;
    cin>>i;
    while(i>0)
    {
        int n;
        cin>>n;
        cout<<f(n)<<endl;
        i--;
    }
    return 0;
}