
#include "DiamondTrap.hpp"

// For you to be able to access ClapTrap from FragTrap
// and ScavTrap as the only parents classes of DiamondTrap,
// (so to say class DiamondTrap : public FragTrap, public ScavTrap
// only so without public Diamond basically) you have to use
// the virtual keyword in the defintions of ScavTrap and
// FragTrap
DiamondTrap::DiamondTrap(std::string name) : 
	ClapTrap(name) , FragTrap(name), ScavTrap(name)
{
	this->name = name;
	ClapTrap::name += "_clap_name";
	FragTrap::hit_points = 100;
	ScavTrap::energy_points = 50;
	FragTrap::attack_damage = 30;

	std::cout << "DiamondTrap constructor called on " << this->name << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Hello this is my name " << this->name << 
			" and this is my ClapTrap name " << ClapTrap::name
			<< std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called on " << this->name << std::endl;
}
