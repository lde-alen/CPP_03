#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

 class ClapTrap
 {
	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap & src);
		~ClapTrap(void);

		ClapTrap & operator=(const ClapTrap & copy);

		void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
 };
std::ostream & operator<<(std::ostream & o, ClapTrap const & copy);
#endif