#include "Meeting.h"

//Meeting 

Meeting::Meeting()
{

	place = "Kharkiv";
	person = "Dobrenko Anna Olegovna";

}

Meeting::Meeting(Date d, Time_ t, string place, string person)
	:Event(d, t)
{
	this->place = place;
	this->person = person;
}

Meeting::~Meeting()
{
}

void Meeting::setplace(string place)
{
	this->place = place;
}

void Meeting::setperson(string person)
{
	this->person = person;
}

string Meeting::getplace() const&
{
	return place;
}

string Meeting::getperson() const&
{
	return person;
}
 

void Meeting::show()
{
	cout << "Date: " << this->date << endl << "Time: " << this->time << endl;
	cout << "Place: " << this->place << endl << "Person: " << this->person << endl;
}

string Meeting::type()
{
	return "Meeting";
}
string Meeting::toString()
{
	return "{date:" + to_string(date.getDay()) + " " + to_string(date.getMonth()) + " " + to_string(date.getYear()) +
		"; time:" + to_string(time.getHour()) + " " + to_string(time.getMinutes()) + " " + to_string(time.getSeconds()) +
		"; person:" + getperson() + "; place:" + getplace(); "}";
}
