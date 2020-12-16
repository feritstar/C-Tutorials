#include <iostream>
#include "string.h"

using namespace std;

// do not set public to a variable in the class
// use private variables and public functions that access those variables in same class.
class myClass
{
public :
	void setName(string x) { name = x; };
	void printOut() { cout << name << endl; };
private: 
	string name;
};

int main()
{
	//myClass	mY;
	//mY.name = "john riley";
	//cout << mY.name << endl;
	myClass nameChanger;
	nameChanger.setName("John Riley");
	nameChanger.printOut();
	return 0;
}