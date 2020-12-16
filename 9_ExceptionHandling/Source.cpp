#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "*****Mini Calculator*****" << endl;
	// exceptions in c++
	int num1, num2, operatorCalc;
	try
	{
		cout << "Please enter first integer: " << endl;
		cin >> num1;

		cout << "Please enter second integer: " << endl;
		cin >> num2;

		cout << "Please select the operator: " << endl;
		cout << "1 for Addition Operation" << endl;
		cout << "2 for Substraction Operation" << endl;
		cout << "3 for Multiplication Operation" << endl;
		cout << "4 for Divison Operation " << endl;
		cout << "5 for Exit! " << endl;
		cin >> operatorCalc;
		
		if (operatorCalc == 1)
		{
			cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
		}
		else if (operatorCalc == 2)
		{
			if (num1 > num2)
			{
				cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
			}
			else
			{
				throw 2;
			}
		}
		else if (operatorCalc == 3)
		{
			cout << num1 << " . " << num2 << " = " << (num1 * num2) << endl;
		}
		else if (operatorCalc == 4)
		{
			if ( num2 > 0 )
			{
				cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
			}
			else
			{
				throw 4;
			}
		}
		else if (operatorCalc == 5)
		{
			return 0;
		}
	}
	catch (int errorNumber)
	{
		if (operatorCalc == 2)
		{
			cout << "first integer must be greater for substraction operation!, ErrorNumber: " << errorNumber << endl;
		}
		else if (operatorCalc == 4)
		{
			cout << "divider integer must be greater to 0 for division operation!, ErrorNumber: " << errorNumber << endl;
		}
		
	}
	main();
}
