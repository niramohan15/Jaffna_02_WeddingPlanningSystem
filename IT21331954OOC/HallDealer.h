#pragma once
#include"EventDealers.h"
class HallDealer : public EventDealers
{
protected:
	int hId;
public:
	HallDealer();
	HallDealer(int Id);
	void calCSalary();
};


