#include <iostream>

using namespace std;

//template <class FIRST, class SECOND> // a template creates a generic type of data.
//FIRST smaller(FIRST a, SECOND b)
//{
//	return (a < b ? a : b);
//}

template <class myTemplate>
class Bucky
{
	myTemplate first, second;
public:
	Bucky(myTemplate a, myTemplate b)
	{first = a;second = b;}
	myTemplate bigger();
};

template <class myTemplate>
myTemplate Bucky<myTemplate>::bigger()
{return (first > second ? first : second);}

int main()
{
	//int x = 89;
	//double y = 56.86;
	//cout << smaller(x,y) << endl;

	Bucky<int>newBucky(65, 105); // we need to tell the arguments type for template. myTemplate is our template type.
	cout << newBucky.bigger() << endl;
}
