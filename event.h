#include "Date.h"
#include "Time_.h"

class Event
{
protected:
	Date date;
	Time_ time;
public:
	Event();
	~Event();
};
