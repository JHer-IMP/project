#include <iostream> // 包含标准输入输出流库，用于输入输出操作。
using namespace std; // 使用标准命名空间，这样可以直接使用cin、cout等而不需要std::前缀。

class Rectangle // 定义一个名为Rectangle的类
{
public: // 公共部分，类的成员函数和变量
    Rectangle(void); // 构造函数声明，不接受参数
    Rectangle(float length,float width); // 构造函数声明，接受两个参数，分别代表长度和宽度
    ~Rectangle(void); // 析构函数声明，用于对象销毁时的清理工作
    float getArea(); // 成员函数声明，用于计算面积
    float getGirth(); // 成员函数声明，用于计算周长（周长）

private: // 私有部分，类的成员变量
    float mLength; // 私有成员变量，用于存储矩形的长度
    float mWidth; // 私有成员变量，用于存储矩形的宽度
};

// 无参数构造函数的定义，初始化长度和宽度为0
Rectangle::Rectangle(void) : mLength(0), mWidth(0) {}

// 带参数的构造函数的定义，使用初始化列表初始化长度和宽度
Rectangle::Rectangle(float length, float width) : mLength(length), mWidth(width) {}

// 析构函数的定义，当前实现为空，没有进行任何清理工作
Rectangle::~Rectangle(void) {}

// getArea函数的定义，计算并返回矩形的面积
float Rectangle::getArea()
{
    return mLength*mWidth;
}

// getGirth函数的定义，计算并返回矩形的周长
float Rectangle::getGirth()
{
    return 2*(mLength+mWidth);
}

int main() // 主函数，程序的入口点
{
    float m, n; // 定义两个浮点型变量，用于存储用户输入的长度和宽度
    cout << "Input the Length and Width: "; // 输出提示信息
    cin >> m >>n; // 从标准输入读取长度和宽度
    Rectangle r1(m,n); // 使用用户输入的值创建Rectangle对象r1
    cout<<"The Area is: "<<r1.getArea()<<endl; // 输出r1的面积
    Rectangle r2(m,n); // 使用用户输入的值创建Rectangle对象r2
    cout<<"The Perimeter: "<<r2.getGirth()<<endl; // 输出r2的周长
}