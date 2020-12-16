#pragma once
class burrito
{
public:
	burrito();
	void setParameters(float _principalMoney, double _r);
	float calculate();
protected:
private:
	float principalMoney = 0; // amount of money to invest
	double r = 0; // interest rate
	float a = 0; // final money
};

