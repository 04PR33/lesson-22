#include "Custom.h"

string Custom::toString()
{
	return "{date: '"+to_string(date.getDay())+"."+ to_string(date.getMonth())+ "." + to_string(date.getYear()) + "'\ntime: '"+to_string(time.getHour())+":"+ to_string(time.getMinutes) +":"+ to_string(time.getSeconds()) +"'\ndescription: '"+this->description+"'}";
}
