#pragma once
#include<iostream>
#include"Pet.h"
class Cat: public Pet
{
public:
	Cat(double hp, double atk, double def, const std::string name, const std::string sound) 
		:Pet(hp, atk, def, name) { setSound(sound); }
	virtual ~Cat(){}
	virtual void attack() override;
	virtual void move() override;
	void setSound(std::string sound) { sound_ = sound; }
	std::string getSound() { return sound_; }
private:
	std::string sound_;
};

