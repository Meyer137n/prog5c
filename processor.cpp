#include "processor.h"
#include <iostream>
#include <stdio.h>
using namespace std;

processor::processor()
{
	name = "-";
	cores = 0;
	streams = 0;
	frequency = 0;
}
processor::processor(std::string name, int cores, int streams, double frequency)
{
	this->name = name;
	this->cores = cores;
	this->streams = streams;
	this->frequency = frequency;

}

void processor::vvod()
{
	cout << "\n ������� �������� ����������: ";
	while (getchar() != '\n');
	getline(std::cin, name);
	cout << " ������� ���������� ���� ����������: ";
	cin >> cores;
	cout << " ������� ���������� ������� ����������: ";
	cin >> streams;
	cout << " ������� ������� ���������� ���: ";
	cin >> frequency;
	
}
void processor::vivod()
{
	cout << " �������� ����������: " << name << endl;
	cout << " ���������� ���� ����������: " << cores << endl;
	cout << " ���������� ������� ����������: " << streams << endl;
	cout << " ������� ����������: " << frequency << " ���" << endl;
}
