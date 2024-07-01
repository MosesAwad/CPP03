
#include "ClaptTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "ClapTrap constructor called on " << this->name << std::endl;
}

ClapTrap::ClaptTrap(const &ClaptTrap other)
{
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called on " << this->name << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (energy_points > 0)
	{
		this->energy_points--;
		std::cout << "ClapTrap " << this->name << " attacks "
			<< target << " causing " << this->attack_damage
			<< " points of damage" <<std::endl;
	}
	else
		std::cout << "ClapTrap" << this->name << " unable to"
			<< " attack " << target << " due to insufficient "
			"energy points ( " << this->energy_points << " )"; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= amount;
	if (this->hit_points <= 0)
		this->hit_points = 0;
	std::cout << "ClapTrap" << this->name << " has taken "
			<< amount << " amount of damage leaving them " 
			"with " <<this->hit_points << " hitpoints "
			"left" << std::endl;
}
