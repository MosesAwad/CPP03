
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

// By saying public here before ClapTrap, we are saying
// that we want to inherit all of the members in ClapTrap
// just as they are.
class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		void	attack(const std::string& target);
		void	guardGate();
};

#endif