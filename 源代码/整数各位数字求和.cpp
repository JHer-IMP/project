#include <iostream>
using namespace std;

int sumi(int n)
{
    if (n==0) return 0;
    int sum = n%10+sumi(n/10);
    return sum;
}

int main()
{
    int n;
    cin >>n;
    cout<<sumi(n)<<endl;
    return 0;
}