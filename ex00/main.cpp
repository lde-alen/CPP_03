#include "ClapTrap.hpp"

int	main(void)
{
	{
		ClapTrap	swagger;
		ClapTrap	x(swagger);

		x.attack("");
		x.takeDamage(9);
		x.beRepaired(3);
		x.takeDamage(3);
		ClapTrap y(x);
		y.takeDamage((1));
	}
	std::cout << "\nTEST NUMBER 2\n" << std::endl;
	{
		ClapTrap swagger("Mi");
		ClapTrap test = swagger;

		test.attack("some person");
		test.attack("");
		test.takeDamage(UINT_MAX);
	}
	std::cout << "\nTEST NUMBER 3\n" << std::endl;
	{
		ClapTrap swagger("MOO");
		ClapTrap test = swagger;

		test.attack("another person");
		test.attack("");
		test.beRepaired((-1));
		test.takeDamage(UINT_MAX + 9);
		swagger.takeDamage(5);
	}
	std::cout << "\nTEST NUMBER 4\n" << std::endl;
	{
		ClapTrap swagger("hi");
		ClapTrap test = swagger;

		test.attack("another person");
		test.takeDamage(10);
		test.attack("another person");

		swagger.takeDamage(5);
	}
	return (0);
}