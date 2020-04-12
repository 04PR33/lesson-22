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

void Custom::show()
{
	cout << "----------------------" << endl;
	cout << "\t\t" << this->type << endl;
	cout << date.getDay() << "." << date.getMonth() << "." << date.getYear() << "\t" << time.getHour() << ":" << time.getMinutes() << ":" << time.getSeconds() << endl;
	cout << "Description: " << this->description << endl;
	cout << "----------------------" << endl;
}

string Custom::type()
{
	return "Custom";

}
string Custom::toString()
{
	return "{date: '"+to_string(date.getDay())+"."+ to_string(date.getMonth())+ "." + to_string(date.getYear()) + "'\ntime: '"+to_string(time.getHour())+":"+ to_string(time.getMinutes()) +":"+ to_string(time.getSeconds()) +"'\ndescription: '"+this->description+"'}";
}
