#include "pch.h"
#include <iostream>

int main()
{
	int num1, num2;
	int res, var;
	char tr;

	do 
	{
	std::cout << "Hello, my dear. What are the numbers?" << std::endl;
	std::cout << "Number 1: " << std::endl;
	std::cin >> num1;
	std::cout << "Number 2: " << std::endl;
	std::cin >> num2;
	std::cout << "What do you want to do ? \n 1. + \n 2. - \n 3. * \n 4. / \n " << std::endl;
	std::cin >> var;

		if (var = 1)
		{
			res = (num1 + num2);
		}
		if (var = 2) {
			res = (num1 - num2);
		}
		if (var = 3)
		{
			res = (num1 * num2);
		}
		if (var = 4)
		{
			res = (num1 / num2);
		}

		std::cout << "Your answer: " << var << "\nResult: " << res << std::endl;
		std::cout << "Do you want to try again? y/n" << std::endl;
		std::cin >> tr;
		
	} while (tr = 1);

	return 0;
}
