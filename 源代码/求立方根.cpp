#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x,n;  //n为迭代次数
    cin>>x>>n;
    double t = x;
    for (int i = 1;i<=n;i++)
    {
        t = (2*t+x/(t*t))/3;
    }
    cout<<fixed<<setprecision(5)<<t;
}