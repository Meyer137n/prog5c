#include "dop.h"
#include <iostream>
#include <stdio.h>
using namespace std;

dop::dop()
{
	hdisc = 0;
	energy = 0;
	os = "-";
}

dop::dop(int hdisc, int energy, std::string os)
{
	this->os = os;
	this->hdisc = hdisc;
	this->energy = energy;
}

void dop::vvod()
{
	cout << "\n������� ����� �������� ����� ��: ";
	cin >> hdisc;
	cout << " ������� �������� ����� ������� ��: ";
	cin >> energy;
	cout << "������� �������� ������������ �������: ";
	while (getchar() != '\n');
	getline(std::cin, os);

}
void dop::vivod()
{
	cout << " ����� ������� �����: " << hdisc << " ��"<< endl;
	cout << " �������� ����� �������: " << energy << " ��" << endl;
	cout << " ������������ �������: " << os << endl;
}