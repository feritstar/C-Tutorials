#include <iostream>
#include "stockmarket.h"
#include <cmath>
using namespace std;

burrito::burrito()
{
	//ctor; 
	cout << "heyyy" << endl;
}

void burrito::setParameters(float _principalMoney, double _r)
{
	principalMoney = _principalMoney;
	r = _r;
}

float burrito::calculate()
{
	for (int day = 1; day < 31 ; day++)
	{
		a = principalMoney * pow(1 + r, day);
		cout << day << "--" << a << endl;
	}

	cout << "final money: " << a << endl;
	return a;
}