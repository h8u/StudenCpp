#include "pch.h"
#include <iostream>

double func();

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите 5 чисел: ";
	std::cout << "Результат: " << func();
	return 0;
}

double func()
{
	double a, result;
	double f[5];
	for (int i = 0; i < 5; i++)
	{
	    std::cin >> a;
		f[i] = a * a;
	}
	result = f[0] * f[2] - f[1] / f[3] + f[3] * (f[4] - f[0]) - f[2];
	return result;
}
