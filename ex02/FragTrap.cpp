
#include "FragTrap.hpp"

FragTrap::FragTrap(void) 
{
	this->_name = "default";
	this->_attackDamage = 30;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) 
{
	this->_name = copy._name;
	this->_attackDamage = copy._attackDamage;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	std::cout << "FragTrap " << _name << " copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy) 
{
	this->_name = copy._name;
	this->_attackDamage = copy._attackDamage;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	std::cout << "FragTrap operator = " << _name << " called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void) 
{
	std::cout << "FragTrap " << this->_name << " destructor called" << std::endl;

}

FragTrap::FragTrap(std::string _name)
{
	this->_name = _name;
	this->_attackDamage = 30;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	
	std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (!this->_hitPoints) 
	{
		std::cout << "FragTrap " << this->_name << " can not move..." << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << this->_name << " high five!\n";
	}
}