#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

People::People(string n, Birthday bo)
	: name(n),
	  dateOfBirth(bo)
{

}

void People::printPeopleInfo()
{
	cout << "Name : " << name << " was born on ";
	dateOfBirth.printDate();
}