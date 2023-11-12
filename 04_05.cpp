#include <iostream>
#include <string>
using namespace std;
int main()
{
    int qm,py,lw;
    string bgb,west;
    int num,most=0,sum=0;
    cin>>num;
    int q[num];
    string name[num];
    for(int i=0;i<num;i++)
    {
        if(num>100 || num<1 || qm>100 || qm<0 || qm>100 || qm<0 || lw>10 || lw<0)//设置输入参数范围
        {
            break;
        }
        cin>>name[i]>>qm>>py>>bgb>>west>>lw;//用户输入
        q[i]=0;
        //每一种奖学金对应的要求
        if(qm>80 && lw>=1)
        {
            q[i]+=8000;//累加个人的奖学金
        }
        if(qm>85 && py>80)
        {
            q[i]+=4000;
        }
        if(qm>90)
        {
            q[i]+=2000;
        }
        if(qm>85 && west=="Y")
        {
            q[i]+=1000;
        }
        if(py>80 && bgb=="Y")
        {
            q[i]+=850;
        }
        
    }
    //取最大值
    for(int i=0;i<num;i++)
    {
        if(q[i]>most)
        {
            most=q[i];
        }
    }
    //找到最大值对应的输入的第一个学生
    for(int i=0;i<num;i++)
    {
        if(most==q[i])
        {
            cout<<name[i]<<endl;
        }
    }
    //计算总和
    for(int i=0;i<num;i++)
    {
        sum+=q[i];
    }
    //输出
    cout<<most<<endl<<sum;
    return 0;
}