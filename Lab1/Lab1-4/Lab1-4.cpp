#include "pch.h"
#include <iostream>

int main()
{
	int num1, num2;
	int res, var;
	int tr;
	char hl;

 do {
	std::cout << "Hello, my dear. What are the numbers?" << std::endl;
	std::cout << "Number 1: " << std::endl;
	std::cin >> num1;
	std::cout << "Number 2: " << std::endl;
	std::cin >> num2;
 
	std::cout << "What do you want to do ? \n 1. + \n 2. - \n 3. * \n 4. / \n " << std::endl;
	std::cin >> var;
	std::cout << "Your answer: " << var;

		switch (var)
		{
		case 1:
		{
			tr = (num1 + num2);
			std::cout << "Result: " << tr << std::endl;
			std::cout << "Do you want to try again ? y / n" << std::endl;
			std::cin >> hl;
			break;
		}
		case 2:
		{
			tr = (num1 - num2);
			std::cout << " Result: " << tr << std::endl;
			std::cout << "Do you want to try again ? y / n" << std::endl;
			std::cin >> hl;
			break;
		}
		case 3:
		{
			tr = (num1 * num2);
			std::cout << " Result: " << tr << std::endl;
			std::cout << "Do you want to try again ? y / n" << std::endl;
			std::cin >> hl;
			break;
		}
		case 4:
		{
			tr = (num1 / num2);
			std::cout << " Result: " << tr << std::endl;
			std::cout << "Do you want to try again ? y / n" << std::endl;
			std::cin >> hl;
			break;
		}
		}
	} while (hl == 'y');
	
	return 0;
}

