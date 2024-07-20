
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		FragTrap();
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		~FragTrap();
		void	highFiveGuys(void);
};

#endif