#include<iostream>
#include "Animal.h"
using namespace std;
Animal::Animal(double hp, double atk, double def)
{
	setHealthPoints(hp);
	setAttackDamage(atk);
	setDefenceStat(def);
}
void Animal::print()
{
	cout << "Health: " << getHealthPoints() <<
		" of " << getHealthPoints() << " points remaining. (100%)" << endl;// " of 40 points remaining. (100%)" << endl;
	cout << "Other stats:" << endl;
	cout << "attack: " << getAttackDamage() << " damage" << endl;
	cout << "defense: " << getDefenceStat() << " points." << endl;
}
