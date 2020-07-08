#pragma once
#include<iostream>
#include"Animal.h"
class Wolf: public Animal
{
public:
	Wolf(double hp,double atk,double def):Animal(hp,atk,def){}
	virtual ~Wolf(){}
	virtual void move() override;
	virtual void attack() override;
	void stealthAttack();
private:

};

