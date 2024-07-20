
#include "ScavTrap.hpp"

int main()
{
	/*
		MAIN 1
	*/
	std::cout << "---Main 1---" << std::endl;
	{
		ScavTrap Lame("Lame");

		Lame.takeDamage(4);
		Lame.attack("Stupid");

		ScavTrap Lame2(Lame);
		Lame2.beRepaired(3);
		Lame2.guardGate();
	}
	/*
		MAIN 2
	*/
	std::cout << "---Main 2---" << std::endl;
	{
		ClapTrap *Bane;

		Bane = new ScavTrap("Bane");

		Bane->attack("Idiot");

		delete(Bane);
	}
	return (0);
}
