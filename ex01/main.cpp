
#include "ScavTrap.hpp"

int main()
{
	ScavTrap Lame("Lame");

	Lame.takeDamage(4);
	Lame.attack("Stupid");

	ScavTrap Lame2 = Lame;
	Lame2.beRepaired(3);
	Lame2.guardGate();
	return (0);
}
