#include <iostream>
#include <vector>
#include <algorithm> // for sort and remove
#include <unordered_set>
using namespace std;

int main() {
    size_t m, n;
    
    cin >> m;
    vector<size_t> vec1(m);
    for (size_t i = 0; i < m; i++) {
        cin >> vec1[i]; // 直接使用 size_t，无需中间变量
    }
    
    cin >> n;
    vector<size_t> vec2(n);
    for (size_t i = 0; i < n; i++) {
        cin >> vec2[i]; // 直接使用 size_t，无需中间变量
    }

    // 使用集合去重
    unordered_set<size_t> uniqueElements(vec1.begin(), vec1.end());
    uniqueElements.insert(vec2.begin(), vec2.end());

    // 清空 vec1，并将唯一元素添加进去
    vec1.assign(uniqueElements.begin(), uniqueElements.end());

    // 排序
    sort(vec1.begin(), vec1.end());

    // 输出结果
    for (size_t value : vec1) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
