
#include "pch.h"
#include <iostream>

void numCheck(int &enterNum, int &remaind5, bool &positiveNum, bool &evenNum, bool &moreThanTen);

int main()
{
	setlocale(LC_ALL, "Russian");
	bool positiveNum, evenNum, moreThanTen;
	int remaind5, enterNum;

	std::cout << "Введите число: ";
	std::cin >> enterNum;
	numCheck(enterNum, remaind5, positiveNum, evenNum, moreThanTen);
	if (positiveNum)  std::cout << "Число положительное \n"; 
	else std::cout << "Число отрицательное \n"; 
	if (evenNum)  std::cout << "Число четное \n"; 
	else  std::cout << "Число не четное \n"; 
	std::cout << "Остаток от деления на 5: " << remaind5 << "\n";
	if (moreThanTen)  std::cout << "Число больше 10 \n"; 
	else  std::cout << "Число меньше 10 \n"; 

	return 0;
}

void numCheck(int &enterNum, int &remaind5, bool &positiveNum, bool &evenNum, bool &moreThanTen)
{
	if (enterNum > 0)  positiveNum = 1; 
	else  positiveNum = 0;  //является ли число положительным?
	if (enterNum % 2 == 0)  evenNum = 1; 
	else  evenNum = 0;  //является ли число четным?
	remaind5 = enterNum % 5; //остаток от деления на 5
	if (enterNum > 10)  moreThanTen = 1; 
	else  moreThanTen = 0;  //больше ли это число 10?
}