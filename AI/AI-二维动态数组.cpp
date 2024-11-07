#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // 用户输入行数和列数
    cout << "请输入行数和列数: ";
    cin >> rows >> cols;

    // 创建二维动态数组
    int** matrix = new int*[rows]; // 创建指向行的指针数组
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols]; // 为每行分配列的空间
    }

    // 输入矩阵元素
    cout << "请输入矩阵元素:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "元素 [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // 输出矩阵元素
    cout << "您输入的矩阵为：" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl; // 换行
    }

    // 释放动态分配的内存
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i]; // 释放每一行的内存
    }
    delete[] matrix; // 释放行指针数组的内存

    return 0;
}
