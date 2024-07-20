
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

// For ScavTrap to be able to access the attributes like
// name, hit_points, etc. (members that were previously
// private), we would have to change from private to
// protected. Otherwise, ScavTrap would just inherit them
// but not be able to access them in any of its functions.
class ClapTrap
{
	protected:
		std::string			name;
		long long			hit_points;
		int					energy_points;
		int					attack_damage;
		ClapTrap			();
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		virtual ~ClapTrap();
		ClapTrap& 			operator=(const ClapTrap& other);
		virtual void		attack(const std::string& target);
		void				takeDamage(unsigned int	amount);
		void				beRepaired(unsigned int amount);
};

#endif