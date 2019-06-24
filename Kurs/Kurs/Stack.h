#pragma once
#include <iostream>

using namespace std;

template<class T>
class Stack
{
private:
	T* Array;
	int index = 0; //Курсор
	int size = 10; //Размер начального массива

public:
	Stack()
	{
		Array = new T[size];  //Создали дин. массив
	}

	void Push(int x) //Кладем элемент на вершину стека
	{
		is_Full();
		Array[index] = x;
		index++;
	}

	T Pop() //Удаление элемента с вершины стека
	{
		Array[index] = NULL;
		index--;
		if (index == 0)
		{
			cout << "Stack was empty now" << endl;
		}
		if (size > 10 && index < 10) //Размер стека больше нужного
		{
			this->size = 5;
			resize();
		}

		return 0;
	}

	void Print() //Вывод на экран
	{
		for (int i = 0; i < index; i++)
		{
			cout << Array[i] << " ";
		}
		cout << endl;
	}

	void is_Full() //Проверка на заполненность
	{
		if (index == size) //Если индекс равен размеру, т.е. закончилось свободное место в массиве
		{
			resize();
		}
	}

	T resize() //Ресайз
	{
		T* newArray = new T[2 * size];
		for (int i = 0; i < size; i++)
		{
			newArray[i] = Array[i];
		}
		Array = newArray;
		size *= 2;

		return 0;
	}

	T sizeOfArray() //Размер стека
	{
		return (size);
	}

	T amountOfElemtns() //Количество элементов в стеке
	{
		return (index);
	}
	~Stack() //Деструктор
	{
		delete[] Array;
	}
};

int main()
{
	Stack<int> st;
	st.Push(5);
	st.Print();
	st.Pop();
	st.Print();

	return 0;
}
