#include <iostream>
using namespace std;
class triangle
{
public:
    void settri(int a1,int b1,int c1)
    {
        while(a1+b1<=c1||a1+c1<=b1||b1+c1<=a1)
        {
            cout<<"输入数据无法构成三角形,请重新输入三边"<<endl;
            cin>>a1>>b1>>c1;
        }
        a=a1;
        b=b1;
        c=c1;
    };
    void isspecial()
    {
        if(a==b && b==c)
        cout<<"是等边三角形";
        else if(a==b || b==c ||a==c)
        cout<<"是等腰三角形";
        else 
        cout<<"是不等边三角形";
    };
private:
    int a,b,c;

};
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    triangle t;
    t.settri(a,b,c);
    t.isspecial();
}