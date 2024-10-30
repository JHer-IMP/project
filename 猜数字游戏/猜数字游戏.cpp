#include <iostream>
#include <string>
using namespace std;

int cnt = 0;  //用于计数

void count()  //每次调用增加计数
{
	cnt += 1;
}

int processinput()  //输入数字并判断是否在1到100之间,不在则重新输入
{
	string str;
	cout << "请输入一个一到一百的整数：";
	getline(cin, str);
	int num = stoi(str);
	if (num < 1 || num > 100)
	{
		cout << "输入的数字不在1到100之间！" << endl;
		return processinput();
	}
	return num;  //返回合法数字
}

int main()
{
	int num = 0;
	do
	{
		num = processinput();  // 处理输入并返回合法数字
		count();  // 每次猜测后计数增加
		if (num < 42)
		{
			cout << "猜小了！" << endl;
		}
		else if (num > 42)
		{
			cout << "猜大了！" << endl;
		}
	} while (num != 42);  // 直到猜对为止

	cout << "恭喜你猜对了！答案是42。你一共猜了" << cnt << "次。" << endl;
	return 0;

}