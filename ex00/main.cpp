
#include "ClapTrap.hpp"

int main()
{
	ClapTrap Lame("Lame");

	Lame.takeDamage(10);
	Lame.beRepaired(99);
	Lame.beRepaired(1);
	Lame.beRepaired(1);

	// Lame2 takes all the values of the ClapTrap attributes from Lame
	// at the time of copying but it then becomes an independent object.
	// So Lame2 taking damage does not mean that Lame takes damage.
	ClapTrap Lame2(Lame);
	Lame2.takeDamage(1);
	Lame.takeDamage(1);

	Lame2.attack("Loser");

	ClapTrap Lame3("Lame3");
	Lame3 = Lame2;
	Lame3.takeDamage(1);
	Lame2.takeDamage(1);


	return (0);
}
