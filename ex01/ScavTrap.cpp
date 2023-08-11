#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name)
{
	this->_name = _name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	
	std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) 
{
	this->_name = obj._name;
	this->_attackDamage = obj._attackDamage;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	std::cout << "ScavTrap " << _name << " copy constructor called" << std::endl;

}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) 
{
	this->_name = obj._name;
	this->_attackDamage = obj._attackDamage;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	std::cout << "ScavTrap operator = " << _name << " called" << std::endl;
	return (*this);

}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (!this->_hitPoints || !this->_energyPoints)
	{
		std::cout << "ScavTrap " << this->_name << " can not move..." << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " has entered gate guard mode" << std::endl;
		this->_energyPoints--;
	}
}

void ScavTrap::attack(const std::string &target)
{
	if (!this->_hitPoints || !this->_energyPoints)
	{
		std::cout << "ScavTrap " << this->_name << " can not move..." << std::endl;
	}
	else
	{
		std::cout	<< "ScavTrap " << this->_name << " attacks " << target 
					<< "causing " << this->_attackDamage << " points of damage!"
					<< std::endl;
		this->_energyPoints--;
	}
}