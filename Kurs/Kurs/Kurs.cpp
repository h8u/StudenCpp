#include <iostream>
#include <ctime>
#include <windows.h>
#include <conio.h>
#include <string.h>

using namespace std;

class Puzzle
{
private:
	int lineDesk[16];
	int Desk[4][4];
	int izero, jzero;
	int moves = 0;

public:
	Puzzle() //Создание доски и ее заполнение
	{
		srand(time(NULL));
		for (int i = 0; i < 16; i++)
		{
			lineDesk[i] = i;
		}

		do
		{
			for (int i = 0; i < 16; i++)
			{
				int j = rand() % 16;
				int temp = lineDesk[i];
				lineDesk[i] = lineDesk[j];
				lineDesk[j] = temp;
			}
		} while (solutionFind() == false);

		for (int i = 0, k = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				Desk[i][j] = lineDesk[i + j + k];
			}
			k += 3;
		}
		findZero();
		if (finish())
		{
			cout << "Win!" << endl;

		}

	}

	bool solutionFind() //Проверка решаемости доски
	{
		int inv = 0;
		for (int i = 0; i < 16; i++)
		{
			for (int j = 0; j < i; ++j)
			{
				if (lineDesk[j] > lineDesk[i])
				{
					++inv;
				}
			}
		}

		for (int i = 0; i < 16; ++i)
		{
			if (lineDesk[i] == 0)
			{
				inv += 1 + i / 4;
			}
		}

		if (inv & 1)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	void findZero() //Поиск пустой клетки
	{
		if (finish())
		{
			cout << "Win!" << endl;
		}

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (Desk[i][j] == 0)
				{
					izero = i;
					jzero = j;
				}
			}
		}

	}

	void up()
	{
		if (izero > 0)
		{
			cout << endl;
			std::swap(Desk[izero][jzero], Desk[izero - 1][jzero]);
			Display();
			Moves();
			findZero();

		}
		else
		{
			cout << "No way!" << endl;
		}

	}

	void down()
	{
		if (izero < 3)
		{
			std::swap(Desk[izero][jzero], Desk[izero + 1][jzero]);
			Display();
			Moves();
			findZero();

		}
		else
		{
			cout << "No way!" << endl;
		}
	}

	void left()
	{
		if (jzero > 0)
		{
			std::swap(Desk[izero][jzero], Desk[izero][jzero - 1]);
			Display();
			Moves();
			findZero();

		}
		else
		{
			cout << "No way!" << endl;
		}
	}

	void right()
	{
		if (jzero < 3)
		{
			std::swap(Desk[izero][jzero], Desk[izero][jzero + 1]);
			Display();
			Moves();
			findZero();

		}
		else
		{
			cout << "No way!" << endl;
		}
	}

	void Display()
	{
		system("cls");
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << Desk[i][j] << "\t ";
			}
			cout << endl;
		}
		cout << endl;

	}

	void menu()
	{
		cout << "Welcome to 15 Puzzle game!\n" << endl;
		cout << "1. Play \n2. Exit\n" << endl;
		cout << "Controls: \nMoving: arrows. Exit: Esc" << endl;
		unsigned int entKey; cin >> entKey;
		switch (entKey)
		{
		case 1:
			system("cls");
			Puzzle();
			Display();
		case 2:
			break;
		}
	}

	bool finish()
	{
		int finishArr[16];
		for (int i = 0; i < 16; i++)
		{
			finishArr[i] = i;
		}

		int tempDesk[4][4];
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				tempDesk[i][j] = Desk[i][j];
			}
		}

		int nowArr[16];
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				nowArr[i * 4 + j] = tempDesk[i][j];
			}
		}

		int i = 0;
		for (; i < 16; ++i)
		{
			if (finishArr[i] != nowArr[i])
			{
				break;
			}
		}

		if (i == 16)
		{
			return true;
		}
		else
		{
			return false;
		}

		return 0;
	}

	void Moves()
	{
		moves++;
		cout << "\nMoves: " << moves << endl;
	}

};


int main()
{
	Puzzle player;
	player.menu();

	while (true)
	{
		unsigned int entKey;
		entKey = _getch();
		if (entKey == 72)
		{
			player.up();
		}
		if (entKey == 80)
		{
			player.down();
		}
		if (entKey == 75)
		{
			player.left();
		}
		if (entKey == 77)
		{
			player.right();
		}
		if (entKey == 27)
		{
			player.menu();
		}
	}

	return 0;
}

