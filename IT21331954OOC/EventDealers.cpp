#include "EventDealers.h"
#include<string>;
using namespace std;

EventDealers::EventDealers()
{
	strcpy_s(dName, "");
	dLocation = "Jaffna";
	dEmail = "Email";
	dContact = 000;
	dSalary = 45500.00;
}

EventDealers::EventDealers(char Name[], string Location, string Email, int Contact, float Salary)
{
	strcpy_s(dName, Name);
	dLocation = Location;
	dEmail = Email;
	dContact = Contact;
	dSalary = Salary;

}


