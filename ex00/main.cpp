
#include "ClapTrap.hpp"

int main()
{
	ClapTrap Lame("Lame");

	std::cout << "\n---Testing member functions on ClapTrap object Lame---\n" << std::endl;
	Lame.takeDamage(10);
	Lame.beRepaired(99);
	Lame.beRepaired(1);
	Lame.beRepaired(1);

	// Lame2 takes all the values of the ClapTrap attributes from Lame
	// at the time of copying but it then becomes an independent object.
	// So Lame2 taking damage does not mean that Lame takes damage.
	std::cout << "\n---Testing the copy constructor on ClapTrap object Lame2 by copying ClapTrap object Lame---\n" << std::endl;
	ClapTrap Lame2(Lame);
	Lame2.takeDamage(1);
	Lame.takeDamage(1);

	Lame2.attack("Loser");

	std::cout << "\n---Testing the assignment operator on ClapTrap object Lame3 by copying ClapTrap object Lame2---\n" << std::endl;
	ClapTrap Lame3("Lame3");
	Lame3 = Lame2;
	Lame3.takeDamage(1);
	Lame2.takeDamage(1);

	std::cout << "\n---Time for Clappy bye bye XD---\n" << std::endl;
	return (0);
}

