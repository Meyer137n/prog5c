#include "ram.h"
#include <iostream>
#include <stdio.h>
using namespace std;

ram::ram()
{
	name = "-";
	opermemory = 0;
}
ram::ram(std::string name, int opermemory)
{
	this->name= name;
	this->opermemory = opermemory;

}

void ram::vvod()
{
	cout << "\n ������� ��� ����������� ������: ";
	while (getchar() != '\n');
	getline(std::cin, name);
	cout << " ������� ����� ����������� ������ ��: ";
	cin >> opermemory;
}
void ram::vivod()
{
	cout << " ��� ����������� ������: " << name << endl;
	cout << " ����� ����������� ������: " << opermemory << " ��" << endl;
}

