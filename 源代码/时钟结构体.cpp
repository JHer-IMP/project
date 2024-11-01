#include <iostream>
using namespace std;

struct Time {
   int hour;
   int minute;
   int second;
};

int main()
{
    Time clo1,clo2;
    cout<<"请输入时间"<<endl;  //提交时注释掉
    cin>>clo1.hour>>clo1.minute>>clo1.second;
    cout<<endl;
    cin>>clo2.hour>>clo2.minute>>clo2.second;
    cout<<(clo2.hour*3600+clo2.minute*60+clo2.second)-(clo1.hour*3600+clo1.minute*60+clo1.second)<<endl;
}