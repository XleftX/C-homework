#include <iostream>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    int i=0;
    while(b>=a)
    {
        i++;
        b/=a;
    }
    cout<<i;
    return 0;
}