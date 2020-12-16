#include <iostream>
#include "Source.h"
using namespace std;

int main()
{
	// multidimensional array example
	// 2,3,4
	// 4,5,6
	/*
	int sally[2][3] = { {2,3,4}, {4,5,6} };
	cout << sally[0][0] << " " << sally[0][1] << " " << sally[0][2] << endl;
	cout << sally[1][0] << " " << sally[1][1] << " " << sally[1][2] << endl;
	for (int row = 0; row < 2; row++)
	{
		for (int column = 0; column < 3; column++)
		{
			cout << sally[row][column] << " ";
		}
		cout << endl;
	}
	*/

	// pointer example
	//int* fishpointer;
	//int fish = 5;
	//fishpointer = &fish;
	//cout << "0x" << &fish << endl;
	//cout << *fishpointer << endl;
	//cout << "0x" << fishpointer << endl;

	// constructor and object and class pointer example
	//Source mySourceObject;
	//mySourceObject.printMYfunc();
	//Source* mySourcePointer = &mySourceObject;
	//mySourcePointer->printMYfunc();
	
	Source myObject(3,6);
	myObject.printMYfunc();
}