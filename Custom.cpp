#include "Custom.h"

Custom::Custom()
{
	this->date = Date();
	this->time = Time_();
	this->description = "Some event";
}

Custom::Custom(string description, Date date, Time_ time) : Event(date, time)
{
	this->description = description;
}

Custom::~Custom()
{
}

void Custom::setdescription(string description)
{
	this->description = description;
}

string Custom::getdescription()
{
	return string(description);
}

string Custom::toString()
{
	return "{date: '"+to_string(date.getDay())+"."+ to_string(date.getMonth())+ "." + to_string(date.getYear()) + "'\ntime: '"+to_string(time.getHour())+":"+ to_string(time.getMinutes) +":"+ to_string(time.getSeconds()) +"'\ndescription: '"+this->description+"'}";
}
