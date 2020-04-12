#pragma once
#include "event.h"
#include <string>
using namespace std;


class Meeting :
	public Event
{
protected:
	string place;
	string person;
};

