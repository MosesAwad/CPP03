
#include "ClapTrap.hpp"

int main()
{
	ClapTrap Lame("Lame");

	Lame.takeDamage(1);

	ClapTrap Lame2(Lame);
	return (0);
}
