
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap constructor called on " << this->name << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->name << " high fives the whole squad" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called on " << this->name << std::endl;;
}
