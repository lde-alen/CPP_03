#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default Name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    if (!(Name.empty()) || Name != "")
    {   
        this->_name = Name;
        std::cout << "ClapTrap " << this->_name << " has " << this->_hitPoints << " hit points, " << this->_energyPoints << " energy points and " << this->_attackDamage << " attack damage" << std::endl;
    }
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Default destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & copy) 
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & copy)
{
    std::cout << "ClapTrap assignement operator called" << std::endl;
    if (this != &copy)
    {
        this->_name         = copy._name;
        this->_hitPoints    = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    if (target.empty() || target == "")
        std::cout << "ClapTrap " << this->_name << " is attacking nothing for some reason" << std::endl;
    else if (this->_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << "ClapTrap " << this->_name << " is out of energy, please return to base or git gud" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " damage !" << std::endl;
        this->_energyPoints -= 1;
        std::cout << "ClapTrap " << this->_name << " lost 1 energy and has " << this->_energyPoints << " energy points left" << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is dead it can't take more damage" << std::endl;
    if (this->_hitPoints <= amount)
    {
        std::cout << "ClapTrap " << this->_name << " took " << amount << " damage and died" << std::endl;
        this->_hitPoints = 0;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " took " << amount << " damage" << std::endl;
        this->_hitPoints -= amount;
        std::cout << "ClapTrap " << this->_name << " has " << this->_hitPoints << " hit points left" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is dead it can't be repaired and needs a medic" << std::endl;
    else if (this->_energyPoints < 1)
        std::cout << "ClapTrap " << this->_name << " is out of energy, please return to base or git gud" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " is being repaired for " << amount << " hit points" << std::endl;
        this->_hitPoints += amount;
        std::cout << "ClapTrap " << this->_name << " has " << _hitPoints << " hit points" << std::endl;
    }
}

