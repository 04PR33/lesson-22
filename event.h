#include "Date.h"
#include "Time_.h"

class Event
{
protected:
	Date date;
	Time_ time;
public:
	Event();
	Event(Date date, Time_ t);
	~Event();

	Date get_Date()const&;
	Time_ get_Time()const&;

	void set_Date(Date d);
	void set_Time(Time_ t);
};
