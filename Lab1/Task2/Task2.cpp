#include <pch.h>
#include <iostream>
int main()
{
	char name[255];
	int month, year, age, day;
	std::cout << "Enter your name: " << std::endl;
	std::cin >> name;
	std::cout << "Enter the day of your birthday: " << std::endl;
	std::cin >> day;
	std::cout << "Enter the month of your birthday: " << std::endl;
	std::cin >> month;
	std::cout << "Enter the year of your birthday: " << std::endl;
	std::cin >> year;
	if ((day > 7) and (month >= 11) and (year >= 2000))
	{
		int prom = 2017;
		age = (prom - year);
	}
	else
	{
		int prom = 2018;
		age = (prom - year);
	}
	std::cout << "Hello, " << name << "! You are " << age << " old.";
	return 0;
}