#ifndef CLAPTRAP_H
#define CLAPTRAP_H 

#include <iostream>

class ClapTrap {
protected:
		std::string	m_name;
		int			hp;     //hit points
		int			energy; //energy points
		int			damage; //attack damage

public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& clapTrap);
		~ClapTrap();
		ClapTrap &operator= (const ClapTrap& clapTrap);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
