#include <pch.h>
#include <iostream>
int main()
{
	char name[255];
	int day, month, year, age;

	std::cout << "Enter your name: " << std::endl;
	std::cin >> name;
	std::cout << "Enter the day of your birthday: " << std::endl;
	std::cin >> day;
	std::cout << "Enter the month of your birthday: " << std::endl;
	std::cin >> month;
	std::cout << "Enter the year of your birthday: " << std::endl;
	std::cin >> year;
	if ((day >6) and (month >=10)  and (year >= 2000))
	{
		int prom = 2017;
		age = (prom - year);
		std::cout << "Hello, " << name << "! You are " << age << " old.";
	}
	else
	{
		int prom = 2018;
		age = (prom - year);
		std::cout << "Hello, " << name << "! You are " << age << " old.";
	}
	return 0;
}
