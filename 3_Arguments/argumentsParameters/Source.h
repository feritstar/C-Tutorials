#pragma once
class Source
{
public:
	Source(int a, int b); // constructor with variables
	~Source(); // deconstructor
	void printMYfunc();
protected:
private:
	int regVar;
	const int constVar;
};

