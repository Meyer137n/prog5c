#include "computer.h"
#include <iostream>
using namespace std;

int computer::count = 0; // обнуление static поля count

computer::computer()
{
	price = 0;
	count++;
	id = count;
}

computer::computer(matplate mt, ram rm, processor prc, videocard vdc, dop dp, double price)
{
	this->mt = mt;
	this->rm = rm;
	this->prc = prc;
	this->vdc = vdc;
	this->dp = dp;
	this->price = price;
	count++;
	id = count;
}

void computer::set_computer()
{
	cout << "\n\n Ввод конфигурации компьютера c id " << id << ":" << endl;
	mt.vvod();
	rm.vvod();
	prc.vvod();
	vdc.vvod();
	dp.vvod();
	cout << "\n Введите цену компьютера (руб): ";
	cin >> price;
	if (price < 0)
	{
		throw exception("\n Ошибка ввода: Поле должно быть положительным!\n\n");
	}
}

void computer::get_computer()
{
	cout << "\n Компьютер c id " << id <<" :\n" << endl;
	mt.vivod();
	rm.vivod();
	prc.vivod();
	vdc.vivod();
	dp.vivod();
	cout << " Цена компьютера: " << price << " руб" << endl;
}

int computer::get_id()
{
	return id;
}

void computer::set_id(int id)
{
	this->id = id;
}
