#include "matplate.h"
#include <iostream>
#include <stdio.h>

using namespace std;

matplate::matplate()
{
	name="-";
	slots = 0;
}
matplate::matplate( std::string name, int slots)
{
	this->name = name;
	this->slots = slots;
}

void matplate::vvod()
{
	cout << "\n ������� �������� ����������� �����: ";
	while (getchar() != '\n');
	getline(cin, name);
	cout << " ������� ���������� ������ ��� ����������� ������: ";
	cin >> slots;
}
void matplate::vivod()
{
	cout << " �������� ����������� �����: " << name << endl;
	cout << " ���������� ������ ��� ����������� ������: " << slots << endl;
}

