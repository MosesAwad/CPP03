
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
	std::cout << "ScavTrap default constructor called" << std::endl;
};

// The reason why I put ClapTrap(name) in the 
// initializer list is because ClapTrap does not
// have a truly default constructor [that takes no 
// arguments, basically ClapTrap()]. So, since the
// ScavTrap constructor needs that, I bypass the
// regulation by saying ClapTrap(name) in the initializer
// list and ScavTrap would inherit that name automatically
// now. But otherwise, I wouldn't be able to say 
// this->name = name because ScavTrap first gets initialized
// by default as ClapTrap and if ClapTrap doesn't have a
// default constructor, it wouldn't no how to create itself
// without a name, so just say ClapTrap(name) first. This issue
// is only prevalent in derived/child class constructors but
// not in any other derived/child class functions.
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap constructor called on " << this->name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	*this = other;
	std::cout << "ScavTrap copy constructor called on " << this->name << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->energy_points > 0)
	{
		this->energy_points--;
		std::cout << "ScavTrap " << this->name << " attacks "
			<< target << " causing " << this->attack_damage
			<< " points of damage" <<std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " unable to"
			<< " attack " << target << " due to insufficient "
			"energy points ( " << this->energy_points << " )"; 
}

ScavTrap& 	ScavTrap::operator=(const ScavTrap& other)
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

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called on " << this->name << std::endl;
}
