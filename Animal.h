#pragma once
class Animal
{
public:
	Animal(double hp=40,double atk=10,double def=5);
	virtual void print();
	virtual void move() =0;
	virtual void attack() = 0;
	void setHealthPoints(double hp) { health_points_ = hp; }
	void setAttackDamage(double atk) { attack_damage_ = atk;}
	void setDefenceStat(double def) { defense_stat_ = def; }
	double getHealthPoints() { return health_points_; }
	double getAttackDamage() { return attack_damage_; }
	double getDefenceStat() { return defense_stat_; }
private:
	double health_points_;
	double attack_damage_;
	double defense_stat_;
};

