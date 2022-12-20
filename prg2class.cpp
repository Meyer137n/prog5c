#include <iostream>
#include <Windows.h>
#include <string>

#include "computer.h"
#include "matplate.h"
#include "ram.h"
#include "processor.h"
#include "videocard.h"
#include "dop.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int kol;
	///////////////////////////////
	// работа с одномерным массивом
	cout << "\n Введите количество компьютеров: ";
	try {
		cin >> kol;
		if (kol < 0)
		{
			throw exception("\n Ошибка ввода: Поле должно быть положительным!");
		}
	}
	catch (const exception& ch)
	{
		cout << ch.what() << endl;
		cout << "\n Остановка работы программы!\n\n";
		return 0;
	}
	computer* pc = new computer[kol];
	for (int i = 0; i < kol; i++)
	{
		try {
			pc[i].set_computer();
		}
		catch (const exception& ch2)
		{
			cout << ch2.what() << endl;
		}
	}
	cout << "\n\n";
	for (int i = 0; i < kol; i++)
	{
		pc[i].get_computer();
	}

	/////////////////////////
	//обмен элементов массива
	int n, m;
	int first, second;
	int flag = 0;
	cout << "\n\n\n Введите id первого компьютера для обмена частями: ";
	cin >> n;

	cout << "\n Введите id второго компьютера для обмена частями: ";
	cin >> m;

	for (int i = 0; i <= kol; i++)
	{
		if (pc[i].get_id() == n)
		{
			first = i;
			flag = 1;
			break;
		}
	}

	for (int j = 0; j <= kol; j++)
	{
		if (pc[j].get_id() == m)
		{
			second = j;
			flag = 1;
			break;
		}
	}
	computer buf;
	if (flag == 1)
	{
		int id1, id2;
		id1 = pc[first].get_id();
		id2 = pc[second].get_id();
		buf = pc[first];
		pc[first] = pc[second];
		pc[second] = buf;
		pc[first].set_id(id1);
		pc[second].set_id(id2);
		for (int i = 0; i < kol; i++)
		{
			pc[i].get_computer();
		}
	}
	else { cout << "\n Обмен не произошёл"; }
	delete[] pc;

	/////////////////////////////
	// работа с двумерным массивом
	cout << "\n\n Введите размерность двумерного массива: ";
	try {
		cin >> kol;
		if (kol < 0)
		{
			throw exception("\n Ошибка ввода: Поле должно быть положительным!");
		}
	}
	catch (const exception& ch)
	{
		cout << ch.what() << endl;
		cout << "\n Остановка работы программы!\n\n";
		return 0;
	}
	computer** comp = new computer * [kol];
	for (int i = 0; i < kol; i++)
	{
		comp[i] = new computer[kol];
	}
	for (int i = 0; i < kol; i++)
	{
		for (int j = 0; j < kol; j++)
		{
			try {
				comp[i][j].set_computer();
			}
			catch (const exception& ch2)
			{
				cout << ch2.what() << endl;
			}
		}
	}
	for (int i = 0; i < kol; i++)
	{
		for (int j = 0; j < kol; j++)
		{
			comp[i][j].get_computer();
		}
	}

	/////////////////////////
	//обмен элементов двумерного массива
	int ifirst, jfirst, isecond, jsecond;
	flag = 0;

	cout << "\n\n\n Введите id первого компьютера для обмена частями: ";
	cin >> n;

	cout << "\n Введите id второго компьютера для обмена частями: ";
	cin >> m;


	for (int i = 0; i < kol; i++)
	{
		for (int j = 0; j < kol; j++)
		{

			if (comp[i][j].get_id() == n)
			{
				ifirst = i;
				jfirst = j;
				flag = 1;
				break;
			}
		}
	}
	for (int i = 0; i < kol; i++)
	{
		for (int j = 0; j < kol; j++)
		{

			if (comp[i][j].get_id() == m)
			{
				isecond = i;
				jsecond = j;
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1)
	{
		int id1, id2;
		id1 = comp[ifirst][jfirst].get_id();
		id2 = comp[isecond][jsecond].get_id();
		buf = comp[ifirst][jfirst];
		comp[ifirst][jfirst] = comp[isecond][jsecond];
		comp[isecond][jsecond] = buf;
		comp[ifirst][jfirst].set_id(id1);
		comp[isecond][jsecond].set_id(id2);
		for (int i = 0; i < kol; i++)
		{
			for (int j = 0; j < kol; j++)
			{
				comp[i][j].get_computer();
			}
		}
	}
	else { cout << "\n Обмен не произошёл1"; }

	for (int i = 0; i < kol; i++)
	{
		delete[] comp[i];
	}
	delete[] comp;
	return 0;
}

