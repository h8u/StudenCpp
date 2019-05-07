#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <cstdlib>

int main()
{
	srand(time(NULL));
	int num[16];
	
	for (int i = 0; i < 16; i++) //Заполнил его значениями от 0 до 9 по порядку
	{
		num[i] = i;
	}
	for (int i = 0; i < 16; i++)
	{
		std::cout << num[i] << "\t";
	}
	std::cout << std::endl;
	for (int i = 0; i < 16; ++i) //Перемешал элементы массива
	{
		std::swap(num[i], num[rand() % 9]);
	}
	for (int i = 0; i < 16; i++)
	{
		std::cout << num[i] << "\t";
	}
	std::cout << std::endl << std::endl;
	int array[4][4];
	
	int k = 0;
	for (int i = 0; i < 4; i++)
	{
		
		for (int j = 0; j < 4; j++)
		{
			array[i][j] = num[i + j + k];
		}
		k = k + 3;
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << array[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
	
	unsigned int izero, jzero;
	//Поиск элемента со значением 0.
	for (int i = 0; i < 4; i++) 
	{
		for (int j = 0; j < 4; j++)
		{
			if (array[i][j] == 0)
			{
				izero = i;
				jzero = j;
			}
		}
	}
	std::cout << izero << "\t" << jzero << std::endl;
	
	std::cout << array[izero][jzero] << std::endl;
	int click;
	while (true) 
	{
		
		click = _getch(); //Проверка нажатия клавиши
		if (click == 72) //Стрелка вверх
		{
			if (izero > 0)
			{
				system("cls");

				std::swap(array[izero][jzero], array[izero - 1][jzero]);

				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						std::cout << array[i][j] << "\t";
					}
					std::cout << std::endl;
				}
				std::cout << std::endl;
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						if (array[i][j] == 0)
						{
							izero = i;
							jzero = j;
						}
					}
				}
				
			}
			else { std::cout << "No way!" << std::endl; }
		}
		if (click == 80) //Стрелка вниз
		{
			if (izero < 3)
			{
				system("cls");
				std::swap(array[izero][jzero], array[izero + 1][jzero]);
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						std::cout << array[i][j] << "\t";
					}
					std::cout << std::endl;
				}
				std::cout << std::endl;
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						if (array[i][j] == 0)
						{
							izero = i;
							jzero = j;
						}
					}
				}
				
			}
			else { std::cout << "No way!" << std::endl; }

		}
		if (click == 75) //Стрелка влево
		{
			if (jzero > 0)
			{
				system("cls");
				std::swap(array[izero][jzero], array[izero][jzero - 1]);
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						std::cout << array[i][j] << "\t";
					}
					std::cout << std::endl;
				}
				std::cout << std::endl;
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						if (array[i][j] == 0)
						{
							izero = i;
							jzero = j;
						}
					}
				}
			}
			else { std::cout << "No way!" << std::endl; }
		}
		if (click == 77) //Стрелка вправо
		{
			if (jzero < 3)
			{
				system("cls");
				std::swap(array[izero][jzero], array[izero][jzero + 1]);
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						std::cout << array[i][j] << "\t";
					}
					std::cout << std::endl;
				}
				std::cout << std::endl;
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						if (array[i][j] == 0)
						{
							izero = i;
							jzero = j;
						}
					}
				}
			}
			else { std::cout << "No way!" << std::endl; }
		}
	}
	

	return 0;
}


