#include <iostream>
#include <limits>
#include <string>
#include <sstream>

int processinput() // 不传入参数，直接在函数内部处理输入
{
    std::string input;
    int num;

    while (true) {
        std::cout << "请输入一个1到100的整数: ";
        std::getline(std::cin, input); // 读取整行

        std::stringstream ss(input); // 创建字符串流
        // 尝试读取一个整数
        if (ss >> num) {
            // 检查是否有多余的字符
            char remaining;
            if (ss >> remaining) {
                std::cout << "无效输入，请输入一个1到100的整数" << std::endl; // 有多余字符
                continue; // 继续循环
            }

            if (num < 1 || num > 100) {
                std::cout << "无效输入，请输入一个1到100的整数" << std::endl;
            }
            else {
                return num; // 返回有效输入
            }
        }
        else {
            std::cout << "无效输入，请输入一个1到100的整数" << std::endl; // 输入不是一个数字
        }
    }
}

int sob(int num)
{
    if (num < 42) {
        std::cout << "小了" << std::endl;
    }
    else {
        std::cout << "大了" << std::endl;
    }
    return num; // 不需要重新处理输入，这里仅返回num
}

int main()
{
    int num = processinput(); // 获取有效输入
    int cnt = 1;

    while (num != 42) {
        num = sob(num); // 根据输入判断大小
        num = processinput(); // 再次等待用户输入
        cnt++;
    }

    std::cout << "恭喜你猜对了! 答案是42，你一共猜了" << cnt << "次" << std::endl;

    return 0;
}
