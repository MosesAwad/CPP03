
#include "FragTrap.hpp"

int main()
{
	FragTrap Lame("Lame");

	Lame.takeDamage(88);
	Lame.attack("Stupid");

	FragTrap Lame2(Lame);
	Lame2.beRepaired(3);
	Lame2.highFiveGuys();
	return (0);
}
