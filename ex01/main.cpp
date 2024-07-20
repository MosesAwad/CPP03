
#include "ScavTrap.hpp"


int main()
{
	/*
		MAIN 1
	*/
	std::cout << "------------------Main 1------------------" << std::endl;
	{
		std::cout << "\n---Testing ScavTrap member functions---\n" << std::endl;
		ScavTrap Lame("Lame");

		Lame.takeDamage(4);
		Lame.attack("Stupid");

		std::cout << "\n---Testing ScavTrap copy constructor by copying ScavTrap object Lame into new ScavTrap object Lame2---\n" << std::endl;
		ScavTrap Lame2(Lame);
		Lame2.beRepaired(3);
		Lame2.guardGate();

		std::cout << "\n---Time for Scavvy bye bye XD---\n" << std::endl;
	}
	/*
		MAIN 2
	*/
	std::cout << "\n\n------------------Main 2------------------" << std::endl;
	{
		std::cout << "\n---Testing ScavTrap compatibility with polymorphism on the attack function and the destructor---\n" << std::endl;

		ClapTrap *Bane;
		Bane = new ScavTrap("Bane");

		Bane->attack("Idiot");
		delete(Bane);
	}
	return (0);
}
