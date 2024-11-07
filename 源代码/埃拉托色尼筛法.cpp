#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[2000001]{0};
    for (int i =2;i<n;i++)
    {
        arr[i]=i;
    }
    for (int i=2;i<n;i++)
    {
        for (int j = i*2;j<n;j+=i)
        {
            arr[j]=0;
        }
    }
    for (int i = 2;i<n;i++)
    {
        if (arr[i]!= 0)
        {
            cout<<arr[i];
            if (i<n-1) cout<<" ";
        }
    }
    return 0;
}