#include <iostream>
#include <string>
#include <limits>  // 用于 std::numeric_limits
using namespace std;

int cnt = 0;  // 用于计数

void count()  // 每次调用增加计数
{
    cnt += 1;
}

int processinput()  // 输入数字并判断是否在1到100之间,不在则重新输入
{
    string str;
    int num = 0;  // 初始化为0，以便后续检查
    while (true)  // 重复请求输入，直到得到合法数字
    {
        cout << "请输入一个一到一百的整数：";
        getline(cin, str);

        try {
            num = stoi(str);  // 尝试将字符串转换为 int
            if (num < 1 || num > 100) {
                cout << "输入的数字不在1到100之间！" << endl;
                continue;  // 继续请求输入
            }
            break;  // 输入合法，跳出循环
        }
        catch (const std::invalid_argument&) {
            cout << "无效的输入！请确保输入的是一个整数。" << endl;
        }
        catch (const std::out_of_range&) {
            cout << "输入的数字超出范围！" << endl;
        }
    }
    return num;  // 返回合法数字
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
