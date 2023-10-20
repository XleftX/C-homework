#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int a,b,c;
    c=1;
    while(c)
    {
        do
        {
            cout<<"用0代表石头，1代表剪刀，2代表布"<<endl<<"请输入你的选择：";
            cin>>a;
            b=rand()%3;
            if(a!=0&&a!=1&&a!=2)
            {
                cout<<"输入有误，请重新输入"<<endl;
            }
        }while(a!=0&&a!=1&&a!=2);
        switch(b-a)
        {
            case 1: case -2:cout<<endl<<"你赢了"<<endl;break;
            case 0:cout<<"平局"<<endl;break;
            case -1: case 2:cout<<"你输了"<<endl;break;
        }
    cout<<"是否还要继续下一局？输入0结束，输入1继续"<<endl;
    cin>>c;
    }
    return 0;
}