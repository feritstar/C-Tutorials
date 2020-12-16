#include <iostream>
#include "Source.h"

using namespace std;

Source::Source(int a, int b)
	: regVar(a), 
	  constVar(b)
{
	//constructor
	cout << "hello from constructor!" << endl; 
}

void Source::printMYfunc()
{
	cout << regVar << endl << constVar << endl;
	//cout << "hello to me" << endl;
}

Source::~Source()
{
	//constructor
	cout << "hello from Deconstructor!" << endl;
}