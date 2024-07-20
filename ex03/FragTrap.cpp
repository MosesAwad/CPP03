
#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
	std::cout << "FragTrap default constructor called" << std::endl;
};

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap constructor called on " << this->name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	*this = other;
	std::cout << "FragTrap copy constructor called on " << this->name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
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

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->name << " high fives the whole squad" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called on " << this->name << std::endl;;
}

