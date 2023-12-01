#include <iostream>
using namespace std;
static double pi=3.14;
class circle
{
public:
    double r1,s,l;
    void set(double r1)
    {
        r=r1;
    };
    double area()
    {
        s=pi*r*r;
        cout<<"s="<<s<<endl;
        return 0.0;
    };
    double lenth()
    {
        l=2*pi*r;
        cout<<"l="<<l<<endl;
        return 0.0;
    };

private:
    double r;

};
int main()
{
    circle a;
    int r;
    cin>>r;
    a.set(r);
    a.area();
    a.lenth();
}