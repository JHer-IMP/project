//折半查找即二分法，先查找中间值，若等于，则结束查找，若小于，则查找左侧，若大于，则查找右侧。再在此基础上再次查找，直到查找完成或无结果跳出。


#include <iostream>
using namespace std;

struct lianxiren  //定义一个联系人结构体
{
	string name;
	int phone;
};

int main()
{
	int n;
	cin >> n;
	lianxiren arr[100];
	for (int i = 0; i < n; i++)
	{
		cin >> arr->name >> arr->phone;
	}
	lianxiren chazhao;
	cin >> chazhao.name >> chazhao.phone;
    
    
}