#pragma once
#include "EventDealers.h"
class Catering : public EventDealers 
{
protected:
	int cId;
public:
	Catering();
	Catering(int Id);
	void calCSalary();
};



