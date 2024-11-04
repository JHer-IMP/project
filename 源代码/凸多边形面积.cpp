#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double lengh(int n, int m, int k, int l)
{
    return sqrt(pow(n - k, 2) + pow(m - l, 2));
}

double area(double i, double j, double k)
{
    double halfl = (i + j + k) / 2;
    return sqrt(halfl * (halfl - i) * (halfl - j) * (halfl - k));
}

int main()
{
    int n;
    int arrx[15];
    int arry[15];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arrx[i] >> arry[i];
    }
    double totalArea = 0.0;
    for (int i = 1; i < n-1; i++)
    {
        double a = lengh(arrx[0], arry[0], arrx[i], arry[i]);
        double b = lengh(arrx[0], arry[0], arrx[i+1], arry[i+1]);
        double c = lengh(arrx[i], arry[i], arrx[i+1], arry[i+1]);
        double triangleArea = area(a, b, c); // 计算每个三角形的面积
        totalArea += triangleArea; // 累加三角形面积
    }
    cout << fixed << setprecision(2) << totalArea << endl;
    return 0;
}