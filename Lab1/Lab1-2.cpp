	
#include <pch.h>
#include <iostream>

int main()
{
	int  b, c, d, e;
	char a[255];
	int f = 2017;
	
	std::cout << "Enter your name: " << std::endl;;
	std::cin >> a;
    std::cout << "Enter the day of your birthday: " << std::endl;
	std::cin >> b;
	std::cout << "Enter the month of your birthday: " << std::endl;
	std::cin >> c;
	std::cout << "Enter the year of your birthday: " << std::endl;
	std::cin >> d;
    
	if (c <= 10 && b <= 4)
		 (f + 1);
    else
	   {
		(f + 0);
	      }
	
	int g = (f - d);
	std::cout << "Hello, " << a << "! You are " << g << " Old" << std::endl;; 
	return 0;
}