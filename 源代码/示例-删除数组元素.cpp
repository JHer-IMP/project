#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int indexToRemove = 2; // 假设我们要删除索引为2的元素（即元素3）

    // 删除元素
    vec.erase(vec.begin() + indexToRemove);

    // 打印结果
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}