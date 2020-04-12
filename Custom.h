#pragma once
#include "event.h"
#include <string>
class Custom : public Event
{
protected:
	string description;
public:
	Custom();
	Custom(string description, Date date, Time_ time);
	~Custom();

	string toString();
};

