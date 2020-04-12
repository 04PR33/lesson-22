#include "Birthday.h"



Birthday::Birthday()
{
	this->date = Date();
	this->time = Time_(0, 0, 0, "utf"); //����� �� ���� (��� ���� ��������)
}

Birthday::Birthday(Date d)
{
	this->date = d;
	this->time = Time_(0, 0, 0, "utf"); //����� �� ���� (��� ���� ��������)
}

Birthday::~Birthday()
{
}

string Birthday::get_Hero()
{
	return this->hero;
}

string Birthday::get_Place()
{
	return this->place;
}

int Birthday::get_Age()
{
	return this->age;
}

void Birthday::set_Hero(string h)
{
	this->hero = h;
}

void Birthday::set_Place(string p)
{
	this->place = p;
}

void Birthday::set_Age(int a)
{
	this->age = a;
}

void Birthday::Show()
{
	cout << "����: "; get_Date();
	cout << endl << "�����: "; get_Time();
	cout << endl;
}