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

	string getDescription();
	void setDescription(string description);


	virtual void show();
	virtual string type();
	virtual string toString();
};

