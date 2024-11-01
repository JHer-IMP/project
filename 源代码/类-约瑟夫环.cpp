#include <iostream>
#include <vector>
using namespace std;

class Joseph
{
public:
    Joseph(void);
    ~Joseph(void);
    void simulate(int n, int m, int k);
private:
    vector<int> vec;
};

Joseph::Joseph(void) :vec{} {}

Joseph::~Joseph(void) {}

void Joseph::simulate(int n, int m, int k)
{
    for (int i = 1; i <= n; i++)
    {
        vec.push_back(i);
    }
    int j = k - 1;
    int cnt = 0;
    while (cnt <= n - 1)
    {
        j = j + m - 1;
        j = j % vec.size();  //模运算
        cout << vec[j];
        vec.erase(vec.begin() + j);
        if (cnt < n - 1) cout << " ";
        cnt++;
    }
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;  //输入为三个正整数n和m和k，空格分隔，分别代表编号长度和间隔长度和起始位置，编号长度n<=50。
    Joseph jo;
    jo.simulate(n, m, k);
    return 0;
}