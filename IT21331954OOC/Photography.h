#pragma once
#include "EventDealers.h"
class Photography : public EventDealers 
{
protected:
	int pId;
public:
	Photography();
	Photography(int Id);
	void calCSalary();
};



