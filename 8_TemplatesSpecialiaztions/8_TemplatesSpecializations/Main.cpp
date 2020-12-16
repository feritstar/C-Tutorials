#include <iostream>

using namespace std;

template <class T1>
class Class1
{
public:
	Class1(T1 x)
	{
		cout << x << " is not a character!" << endl;
	}
};

template <>
class Class1<char>
{
public:
	Class1(char x)
	{
		cout << x << " is definitely a character!" << endl;
	}
};

int main()
{
	Class1<int> obj1(15);
	Class1<double> obj2(3.14);
	Class1<char> obj3('a');

	// exceptions in c++
	int x1 = 34;
	int x2 = 35;
	try
	{
		if(x1 < x2)
		{
			throw 25; // you can give any number to an error, whatever you want.
		}
	}
	catch (int errorNumber)
	{
		cout << "first integer must be greater!, ErrorNumber: " << errorNumber << endl;
	}
}