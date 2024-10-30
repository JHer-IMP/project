#include <iostream>
#include <iomanip>

int main()
{
	int n;
	std::cin >> n;
	for (int i = 1; i <= ((n + 1) / 2); i++)  //控制输出行数
	{
		std::cout << std::endl;
		for (int j = 1; j <= ((n - 1) / 2 - i + 1); j++)  //控制输出空格个数,使三角形对称
		{
			std::cout << " ";
		}
		std::cout << "*";

		for (int j = 2; j <= i; j++)  //控制输出星号个数
		{
			std::cout << "**";
		}
		std::cout << std::endl;
	}
	return 0;
}