#include <iostream>
#include <string>
using namespace std;
int main()
{
    //设置两个字符串
    string s1="abcdefghijklmnopqrstuvwxyz";
    string s2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s;
    //用户输入
    getline(cin,s);
    //遍历s中每一个字符
    for(int i=0;i<s.size();i++)
    {
        int a=0;
        while(a<s1.size())//与s1 s2对应
        {
            if (s.at(i)==s1.at(a))
            {
                s.at(i)=s2.at(a);
                break;//寻找相应字母并替换同时终止while
            }
            else if(s.at(i)==s2.at(a))
            {
                s.at(i)=s1.at(a);
                break;
            }
            a++;
        }
    }
    cout<<s;
    return 0;
}