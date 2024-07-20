
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

// By saying public here before ClapTrap, we are saying
// that we want to inherit all of the members in ClapTrap
// just as they are.
class ScavTrap : public ClapTrap
{
	private:
		ScavTrap();
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap();
		void	attack(const std::string& target);
		void	guardGate();
};

#endif