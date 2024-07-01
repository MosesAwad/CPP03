
#include "ClaptTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "ClapTrap constructor called on " << this->name << std::endl;
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
