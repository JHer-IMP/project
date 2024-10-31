const float PI = 3.14; 

class Circle
{
    public:
    Circle(void);
    Circle(double r);
    double getArea();
    double getGirth();
    private:
    double radius;
};

Circle::Circle(void):radius(0) {}

Circle::Circle(double r):radius(r) {}

double Circle::getArea()
{
    return PI*radius*radius;
}

double Circle::getGirth()
{
    return 2*PI*radius;
}

#include<iostream>
using namespace std;
int main()
{
    float r;
    cout << "请输入圆的半径：";
    cin >> r;                                     //从键盘接受半径的值
    Circle c1(r);                            //将值赋值给半径并调用定义好的函数
    cout<<"圆的面积为："<<c1.getArea()<<endl;
    Circle c2(r);
    cout<<"圆的周长为："<<c2.getGirth()<<endl;
}