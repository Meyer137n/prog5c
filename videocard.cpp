#include "videocard.h"
#include <iostream>
#include <stdio.h>
#define default_name "-"

using namespace std;

videocard::videocard()
{
	name = "-";
	videomemory = 0;
}
videocard::videocard(std::string name, int videomemory)
{
	this->name = name;
	this->videomemory = videomemory;
}

void videocard::vvod()
{
	cout << "\n ������� �������� ����������: ";
	while (getchar() != '\n');
	getline(std::cin, name);
	cout << " ������� ����� ����������� ��: ";
	cin >> videomemory;
}
void videocard::vivod()
{
	cout << " �������� ����������: " << name << endl;
	cout << " ����� �����������: " << videomemory << " ��" << endl;
}

