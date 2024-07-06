
#include "DiamondTrap.hpp"
/*
	For you to be able to access ClapTrap from FragTrap
	and ScavTrap as the only parents classes of DiamondTrap,
	(so to say class DiamondTrap : public FragTrap, public ScavTrap
	only so without public Diamond basically) you have to use
	the virtual keyword in the defintions of ScavTrap and
	FragTrap.


	NOW PAY ATTENTION. The prelude to this comment is in DiamondTrap.hpp
	second paragraph. So make sure you read that first. Anyways, the order
	here ClapTrap(name), ScavTrap(name), FragTrap(name) MUST MATCH the order
	of the classes called in the class defintion, so [class DiamondTrap : 
	public ScavTrap, public FragTrap] otherwise, it would not compile. So,
	what happens now is two things: First, since FragTrap came last, DiamondTrap
	will inherit FragTrap's values and Second, FragTrap overrid the values that
	ScavTrap set WITHIN the DiamondTrap class. So, if you comment out the following
	lines:
		FragTrap::hit_points = 100;
		ScavTrap::energy_points = 50;
		FragTrap::attack_damage = 30;
	What would happen if you called DiamondTrap attack, which calls ScavTrap's
	attack, ScavTrap is it would attack with ScavTrap's attack but it would use
	FragTrap's attack damage. You see, both ScavTrap::energy_points and FragTrap::energy_points 
	refer to the same energy_points variable in the shared ClapTrap instance. So actually, FragTrap
	only has one set of energy_points and it can be accessed either by ScavTrap::energy_points or
	FragTrap::energy_points, but it is actually only one value (like two different ways to get
	to the same value). This value of energy_points will be the one set by the last constructor
	in the initializer list, which is FragTrap.
	So what we're doing, is we are resetting the values back to the ones we want in the lines
	below:
		FragTrap::hit_points = 100;
		ScavTrap::energy_points = 50;
		FragTrap::attack_damage = 30;
	But it is essentially the same as doing
		this->hit_points = 100;
		this->energy_points = 50;
		this->attack_damage = 30;
*/
DiamondTrap::DiamondTrap(std::string name) : 
	ClapTrap(name), ScavTrap(name), FragTrap(name)
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
	std::cout << "Hello this is my name -> " << this->name << 
			" and this is my ClapTrap name -> " << ClapTrap::name
			<< std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called on " << this->name << std::endl;
}

void	DiamondTrap::testerGetter()
{
	std::cout << "\nThe value of ScavTrap::KOUGEKI-RYOKU is " << ScavTrap::attack_damage << " and "
			<< "the value of FragTrap::KOUGEKI-RYOKU is " << FragTrap::attack_damage << std::endl;
	std::cout << "Did you see ⬆️ ? They are just different ways to refer to the same variable "
			"in DiamondTrap.\nSo DiamondTrap only has one variable attack_damage; it just has "
			"different ways to refer to it.\n" << std::endl;
}
