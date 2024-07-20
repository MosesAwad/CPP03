
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "ClapTrap constructor called on " << this->name << std::endl;
}

// This equals is my overloaded assignment operator
ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "ClapTrap copy constructor called on " << this->name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called on " << this->name << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy_points > 0)
	{
		this->energy_points--;
		std::cout << "ClapTrap " << this->name << " attacks "
			<< target << ", causing " << this->attack_damage
			<< " points of damage" <<std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " is unable to"
			<< " attack " << target << " due to insufficient "
			"energy points ( " << this->energy_points << " )"; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= amount;
	if (this->hit_points <= 0)
		this->hit_points = 0;
	std::cout << "ClapTrap " << this->name << " has taken "
			<< amount << " amount of damage, leaving them " 
			"with " <<this->hit_points << " hitpoints" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_points == 0)
	{
		std::cout << "Sorry but ClapTrap has " << this->energy_points
		<< " points and thus, is unable to repair" << std::endl;
		return ;
	}
	if (hit_points == 100)
	{
		hit_points = 100;
		std::cout << "Repair request denied, you are already at "
			"maximum health points" << std::endl;
		return ;
	}
	this->hit_points += amount;
	this->energy_points--;
	if (hit_points > 100)
	{
		hit_points = 100;
		std::cout << "Please keep in mind that the maximum amount of"
			" possible hit points is 100" << std::endl;
	}
	std::cout << "ClapTrap " << this->name << " has been "
		"repaired successfuly and is now at " << this->hit_points
		<< " hit points" << std::endl;
}

ClapTrap& 	ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}
