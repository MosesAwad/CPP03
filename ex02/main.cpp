
#include "FragTrap.hpp"

int main()
{
	FragTrap Lame("Lame");
	ClapTrap* point;

	point = new FragTrap("Bane");

	std::cout << '\n';

	point->attack("Idiot");
	Lame.takeDamage(88);
	Lame.attack("Stupid");

	// FragTrap Lame2(Lame);
	// Lame2.beRepaired(3);
	// Lame2.highFiveGuys();
	
	std::cout << '\n';

	delete(point);

	return (0);
}
