
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap Lame("Lame");

	Lame.whoAmI();
	Lame.attack("Bagstrap");
	// Lame.testerGetter();

	// DiamondTrap Lame2(Lame);

	Lame.attack("Hagstrap");

	return (0);
}
