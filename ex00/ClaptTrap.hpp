
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string			name;
		long long			hit_points;
		int					energy_points;
		int					attack_damage;
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		~ClapTrap();
		void		attack(const std::string& target);
		void		takeDamage(unsigned int	amount);
		void		beRepaired(unsigned int amount);
};

#endif