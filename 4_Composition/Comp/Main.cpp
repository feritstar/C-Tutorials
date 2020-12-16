#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;

int main()
{
	Birthday F_Birth(06, 07, 1905);
	People myPeople("Ferit", F_Birth);

	myPeople.printPeopleInfo();
}  