#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    for(int n=200;n<=300;n++)
    {
        int i;
        for(int a=2;a<=sqrt(n);a++)
        {
            i=n%a;
            if(i==0)
            {
                break;
            }
        }
        if(i)
        {
            cout<<n<<endl;
        }
    }
    return 0;
}