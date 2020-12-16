#include <iostream>
#include "string.h"

using namespace std;

// constructors do not have a return type.
// constructors have the same name as your class
// so this way, IDE can identify them as a constructor.
class myClass
{
public:
	myClass(string a) // myClass constructor
	{
		//cout << "this will get printed logically!" << endl;
		setName(a);
	}
	void setName(string x) { name = x; printOut(); };
	void printOut() { cout << name << endl; };
private:
	string name;
};

int main()
{
	// constructors will worked as soon as you create an object of the same class.
	myClass nameChanger("omg");
	myClass nameChanger2("it's different!");
	//nameChanger.setName("John Riley");
	//nameChanger.printOut();
	return 0;
}