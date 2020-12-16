#include <iostream>
#include "burrito.h"

using namespace std;

int main()
{
	burrito myBurrito;
	cout << "hello my friend!" << endl;

	//float a;
	//float p = 10000;
	//float r = .01;
	myBurrito.setParameters(10000,0.03);
	myBurrito.calculate();
	system("pause");
}