//Circle.h
#include<iostream>
using namespace std;
class Circle
{
public:
    Circle(void);
    Circle(float r);      //定义一个圆
    float getArea();      //圆的面积
    float getGirth();     //圆的周长
    static const  float PI;
protected:
    float mR;             //圆的半径
};

const float Circle::PI=3.14;

Circle::Circle(void) :mR(0) {}
Circle::Circle(float r) :mR(r) {}

float Circle::getArea()
{
    return PI * mR * mR;
}

float Circle::getGirth()
{
    return 2 * PI * mR;
}

class Cylinder
{
private:
    float cr;
    float height;
    static const  float PI;
public:
    Cylinder(void);
    Cylinder(float r, float h);
    float getArea()
    {
        return PI * cr * cr * 2 + 2 * PI * cr * height;
    }
    float getVol()
    {
        return PI * cr * cr * height;
    }
};
const float Cylinder::PI = 3.14;
Cylinder::Cylinder(void) :cr(0), height(0) {}
Cylinder::Cylinder(float r, float h) :cr(r), height(h) {}


//main.cpp
//#include"Cylinder.h"
//#include"Circle.h"
#include<iostream>
using namespace std;
int main()
{
    float t, m;
    cout << "请输入圆的半径：";
    cin >> t;                                       //键盘接收圆的半径
    Circle c1(t);
    cout << "圆的面积为：" << c1.getArea() << endl;
    cout << "请输入圆柱的高：";
    cin >> m;                                       //键盘接收圆柱的高
    Cylinder c2(t, m);
    cout << "圆柱的表面积为：" << c2.getArea() << endl;
    cout << "圆柱的体积为：" << c2.getVol() << endl;
}


