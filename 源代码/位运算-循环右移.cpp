#include <iostream>

int main() {
    unsigned int a = 0;
    int b = 0;
    std::cin >> a >> b;
    unsigned int c = (a>>b) | (a<<(16-b));
    c = c & 0xFFFF;
    std::cout << c << std::endl;

    return 0;
}

