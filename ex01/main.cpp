#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "\n------------> CLAPTRAP TESTS <------------\n" << std::endl;
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
	std::cout << "\n------------> SCAVTRAP TESTS <------------\n" << std::endl;
		{
		ScavTrap	swagger;
		ScavTrap	x(swagger);

		x.attack("");
		x.takeDamage(9);
		x.beRepaired(3);
		x.takeDamage(3);
		ScavTrap y(x);
		y.takeDamage((1));
		y.guardGate();
		x.guardGate();
	}
	std::cout << "\nTEST NUMBER 2\n" << std::endl;
	{
		ScavTrap swagger("Mi");
		ScavTrap test = swagger;

		test.attack("some person");
		test.attack("");
		test.takeDamage(UINT_MAX);
		test.guardGate();
	}
	std::cout << "\nTEST NUMBER 3\n" << std::endl;
	{
		ScavTrap swagger("MOO");
		ScavTrap test = swagger;

		test.attack("another person");
		test.attack("");
		test.beRepaired((-1));
		test.takeDamage(UINT_MAX + 9);
		swagger.takeDamage(5);
		swagger.guardGate();
	}
	std::cout << "\nTEST NUMBER 4\n" << std::endl;
	{
		ScavTrap swagger("hi");
		ScavTrap test = swagger;

		test.attack("another person");
		test.takeDamage(10);
		test.attack("another person");
		test.guardGate();

		swagger.takeDamage(5);
	}
	return (0);
}