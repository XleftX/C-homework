#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n=1,m=1;
    while(1)
    {
        cin>>n>>m;
        //输入两个零终止程序
        if(n==0 && m==0)
        {
            break;
        }
        vector<int>num(n,1);//定义一个vector并赋值
        auto p1=num.begin();//定义一个迭代器指向num的第一个元素
        for(int i=0;i<n;i++)
        {
            num[i]=i+1;//按编号赋值
        }
        for(int a=1;a<n;a++)//进行n-1次循环
        {
            auto p2=num.end()-1;//p2指向num最后一个元素
            for(int i=1;i<m;i++)//每一轮数数的循环
            {
                if(*p1==*p2)//若删除完元素后p1指向最后一个元素或循环中间碰到最后一个元素，则p1重新指向第一个元素并跳过p1++避免多数
                {
                    p1=num.begin();
                    continue;
                }
                p1++;//p1一步一步指向下一个元素
            }   
            p1=num.erase(p1);//删除元素
            p2=num.end()-1;//重置p2赋值
            if(*p1>*p2)
            {
                p1=num.begin();//若删除的是最后一个元素则下一轮循环从首元素开始
            }
        }
        cout<<num[0]<<endl;//输出结果
    }
    return 0;
}