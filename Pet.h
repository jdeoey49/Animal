#pragma once
#include<iostream>
#include"Animal.h"
class Pet: public Animal
{
public:
	Pet(double hp, double atk, double def, const std::string name) :Animal(hp, atk, def) { setName(name);}
	virtual ~Pet(){}
	std::string getName() { return name_; }
	void setName(std::string name) { name_ = name; }
private:
	std::string name_;
};

