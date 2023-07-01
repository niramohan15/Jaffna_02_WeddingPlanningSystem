#pragma once
#include <iostream>
#include <cstring> 
#include"RegisteredCustomer.h"
using namespace std;
class EventDealers
{
protected:
	char   dName[50];
	string dLocation;
	string dEmail;
	int    dContact;
	float  dSalary;
	RegisteredCustomer* RCustomer;

public:
	EventDealers();
	EventDealers(char Name[], string Location, string Email, int Contact, float Salary);
	void assign_dDetails();
	void display_dDetails();
};


