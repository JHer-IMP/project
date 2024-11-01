#include <iostream>
using namespace std;

int sumdi(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0) sum += i;
    }
    return sum;
}

void pridi(int n)
{
    cout << n << ",";
    bool ct = 0;
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            if (ct) cout << "+";
            cout << i;
            ct = 1;
        }
    }
    cout << "=" << sumdi(n) << endl;
}

int main() {
    int n, m;
    cin >> n >> m;    
    pridi(n);
    pridi(m);
    if ((sumdi(n) == m) && (sumdi(m) == n)) cout << 1<<endl;
    else cout << 0<<endl;
    return 0;
}

