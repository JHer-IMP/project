#include <iostream>

int main()
{
	int x, y;
	char operation;
	std::cout << "Enter the number of x:";
	std::cin >> x;
	std::cout << "Enter the number of y:";
	std::cin >> y;
	std::cout << "Enter the operation (+,-,*,/):";
	std::cin >> operation;
	std::cout << "Result: ";
	std::cout << (operation == '+'? x + y : (operation == '-'? x - y : (operation == '*'? x * y : (operation == '/'? x / y : 0))))<<endl;
	return 0;
}