#include <iostream>
#include <stdint.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomNumberGenerator()
{
	srand(time(0));
	for (uint8_t i = 0; i < 22; i++)
	{
		cout << (rand() % 6) + 1 << endl; // you will have random numbers around 1-6
	}
	//system("pause");
}

int main()
{
	randomNumberGenerator();
}