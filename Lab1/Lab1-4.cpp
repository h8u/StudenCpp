#include "pch.h"
#include <iostream>

int main()
{
	int num1, num2;
	int var,var1, var2, var3, var4;
	int summa, raznost, umnojenie;
	int res;
	int x;
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

	return 0;
}
