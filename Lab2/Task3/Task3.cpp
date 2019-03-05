
#include "pch.h"
#include <iostream>

bool isExceeded(int numToCalculateFactorial, int& stepNumber);

int main()
{
	int enterNum1, enterNum2;
	int stepNumber = 0;
	std::cout << "Type the number to calculate factorial: ";
	std::cin >> enterNum1;

	std::cout << "Number to compare:";
	
	if (isExceeded(enterNum1, stepNumber))
	{
		std::cout << "Did the factorial exceed the value? YES \n";
		std::cout << "The step number is " << stepNumber;
		
	}
	else
	{
		std::cout << "Did the factorial exceed the value? NO";
	}
}

bool isExceeded(int numToCalculateFactorial, int& stepNumber)
{
	int enterNum2;
	std::cin >> enterNum2;
	int fact = 1;
	for (int j = 1; j == numToCalculateFactorial; j++)
	{
		fact *= j;
		if (fact > enterNum2)
		{
			
			return true;
		}
		stepNumber++;
		
	}
	return false;

}