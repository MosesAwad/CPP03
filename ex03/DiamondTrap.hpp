
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// We have to add the keyword 'virtual' to the defintions
// of ScavTrap and FragTrap in this case, since DiamondTrap
// is not directly inheriting from ClapTrap (ClapTrap is a
// grandparent class here). So to avoid the Diamond Problem
// where DiamondTrap might inherit ClapTrap from both ScavTrap
// and FragTrap, we put the virtual keyword in their defintions.
// Think of it like a protection, almost the same as the #ifndef
// #define protection for a header file.
// 
// 
// NOW HERE PAY ATTENTION, do you notice how we say first
// public ScavTrap AND THEN public FragTrap. Which one you
// pick first does not matter, but the order does matter.
// So if you put ScavTrap first, then FragTrap, what would
// happen is first ScavTrap gets inherited and then FragTrap
// overrides ScavTrap. If you flip the order, the opposite 
// happens. You can even see it from the print messages in
// our main program, it tells you which constructors get
// called first. Go to the defintion of the DiamondTrap 
// constructor DiamondTrap::DiamondTrap(std::string name) : 
// ClapTrap(name), ScavTrap(name), FragTrap(name) found in 
// DiamondTrap.cpp for more details.

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		void	attack(const std::string& target);
		void	whoAmI();
		void	testerGetter();
};

#endif