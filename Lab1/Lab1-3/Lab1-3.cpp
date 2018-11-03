#include <pch.h>
#include <iostream>

int main()
{
	int number = 88;
	int enterNumber;
	int c;
	
	std::cout << "Hi. Try to guess a number. " << std::endl;

	do {
		std::cin >> enterNumber;
		if (enterNumber > number)
		{
			std::cout << "No. Less" << std::endl;
			c = 0;
		} 
		else if (enterNumber < number)
		{
			std::cout << "No. Greater." << std::endl;
			c = 0;
		} 
		else
		{
			std::cout << "YES" << std::endl;
			c = 1;
		}
	} while (c = 0);

	return 0;
}  
