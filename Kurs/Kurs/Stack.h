#pragma once
#include <iostream>

using namespace std;

template<class T>
class Stack
{
private:
	T* Array;
	int index = 0; //������
	int size = 10; //������ ���������� �������

public:
	Stack()
	{
		Array = new T[size];  //������� ���. ������
	}

	void Push(int x) //������ ������� �� ������� �����
	{
		is_Full();
		Array[index] = x;
		index++;
	}

	T Pop() //�������� �������� � ������� �����
	{
		Array[index] = NULL;
		index--;
		if (index == 0)
		{
			cout << "Stack was empty now" << endl;
		}
		if (size > 10 && index < 10) //������ ����� ������ �������
		{
			this->size = 5;
			resize();
		}

		return 0;
	}

	void Print() //����� �� �����
	{
		for (int i = 0; i < index; i++)
		{
			cout << Array[i] << " ";
		}
		cout << endl;
	}

	void is_Full() //�������� �� �������������
	{
		if (index == size) //���� ������ ����� �������, �.�. ����������� ��������� ����� � �������
		{
			resize();
		}
	}

	T resize() //������
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

	T sizeOfArray() //������ �����
	{
		return (size);
	}

	T amountOfElemtns() //���������� ��������� � �����
	{
		return (index);
	}
	~Stack() //����������
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
