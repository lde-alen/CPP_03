#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
 public:
	FragTrap(void);
	FragTrap(const FragTrap& copy);
	FragTrap& operator=(const FragTrap& copy);
	~FragTrap(void);
	FragTrap(std::string name);
	void highFivesGuys(void);
};

#endif