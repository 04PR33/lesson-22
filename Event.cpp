#include "event.h"



Event::Event()
{
}

Event::Event(Date date, Time_ t)
{
	this->date = date;
	this->time = t;
}


Event::~Event()
{
}

Date Event::get_Date() const &
{
	return this->date;
}

Time_ Event::get_Time() const &
{
	return this->time;
}

void Event::set_Date(Date d)
{
	this->date = d;
}

void Event::set_Time(Time_ t)
{
	this->time = t;
}
