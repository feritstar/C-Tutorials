#include <iostream>

using namespace std;

class Enemy
{
protected:
	int attackPower;
public:
	void setAttackPower(int a)
	{
		attackPower = a;
	}
};

class Ninja : public Enemy
{
public:
	void attack()
	{
		cout << "I'm a ninja, ninja chop! -" << attackPower << endl;
	}
};

class Monster : public Enemy
{
public:
	void attack()
	{
		cout << "Monster must eat you!!! -" << attackPower << endl;
	}
};

int main()
{
	Ninja n;
	Monster m;

	Enemy* enemy1 = &n;		// because ninja is of type enemy, this is valid
	Enemy* enemy2 = &m;		// anything that an enemy can do, monster can do

	enemy1->setAttackPower(29); // ninja is just a more specific type of enemy
	enemy2->setAttackPower(99); // every enemy has setAttackPower

	n.attack(); // can't use enemy1, because its type Enemy
	m.attack(); // enemy class does not have attack
	return 0; // virtual members make this even easier

}