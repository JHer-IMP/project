#include <iostream>
using namespace std;
int sumfactor(int n)
{
    int sum = 0;
    for (int i=1;i<=n/2;i++)
    {
        if (n%i==0) sum += i;
    }
    return sum;
}
int main()
{
    int m,n;
    cin>>m>>n;
    int arr[20001]{0};
    for (int i = m;i<=n;i++)
    {
        arr[i]=sumfactor(i);
    }
    int cnt=0;
    for (int i=m;i<=n;i++)
    {
        for (int j=m;j<n;j++)
        {
            if(i==arr[j]&&arr[i]==j&&i<j)
            {
                cout<<i<<" "<<j<<endl;
                cnt++;
            }
        }
    }
    if (cnt==0) cout<<"NONE";
    return 0;
}