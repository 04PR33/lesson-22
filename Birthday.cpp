#include "Birthday.h"



Birthday::Birthday()
{
	this->date = Date();
	this->time = Time_(0, 0, 0, "utf"); //Время не надо (это ДЕНЬ рождения)
}

Birthday::Birthday(Date d, int age, string hero, string place)
{
	this->date = d;
	this->time = Time_(0, 0, 0, "utf"); //Время не надо (это ДЕНЬ рождения)
	this->age = age;
	this->hero = hero;
	this->place = place;
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
	cout << "Дата: "; get_Date();
	cout << endl << "Время: "; get_Time();
	cout << endl;
}

string Birthday::toString()
{
	char buffer[10];
	itoa(date.getDay(), buffer, 10);
	char buffer1[10];
	itoa(date.getMonth(), buffer1, 10);
	char buffer2[10];
	itoa(date.getYear(), buffer, 10);
	string s = "Дата: ";
	s += date.getDay() + " ";
	s += date.getMonth() + " ";
	s += date.getYear() + " ";
	s += "Время: ";
	s+= time.getHour();
	s += time.getMinutes() + " ";
	s += time.getSeconds() + " ";
	s += "hero: "+hero;
	s += "place: " + place;
	s += age;
	return  s;
}

string Birthday::type()
{
	return "Birthday";
}
