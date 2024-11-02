#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

bool isleapyear(int n)
{
    return (((n%4==0)&&(n%100!=0))||(n%400==0));
}

int main()
{
    int str;  //年月日
    int n;  //推进的天数
    cin >>str>>n;
    int y = (str/10000);  //年
    int m = ((str%10000)/100);  //月
    int d = (str%100);  //日
    while (n>0)  //用推进天数控制循环
    {
        d++;
        n--;  //每过一天推进天数减一
        if ((m==1)&&(d==32)) {m++;d=1;}
        if ((m==2)&&!isleapyear(y)&&(d==29)) {m++;d=1;}
        if ((m==2)&&isleapyear(y)&&(d==30)) {m++;d=1;}
        if ((m==3)&&(d==32)) {m++;d=1;}
        if ((m==4)&&(d==31)) {m++;d=1;}
        if ((m==5)&&(d==32)) {m++;d=1;}
        if ((m==6)&&(d==31)) {m++;d=1;}
        if ((m==7)&&(d==32)) {m++;d=1;}
        if ((m==8)&&(d==32)) {m++;d=1;}
        if ((m==9)&&(d==31)) {m++;d=1;}
        if ((m==10)&&(d==32)) {m++;d=1;}
        if ((m==11)&&(d==31)) {m++;d=1;}
        if ((m==12)&&(d==32)) {m=1;d=1;y++;}
    }
    if (y>9999) cout << "out of limitation!"<<endl;
    else
    {
        cout<<setw(4)<<setfill('0')<<y;
        cout<<setw(2)<<setfill('0')<<m;
        cout<<setw(2)<<setfill('0')<<d;
    }
    return 0;
}