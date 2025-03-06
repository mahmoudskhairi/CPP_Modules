#ifndef _SCAVTRAP_HPP_
#define _SCAVTRAP_HPP_
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string Name);
    ScavTrap(ScavTrap &New);
    ScavTrap &operator=(ScavTrap &New);
    ~ScavTrap();
    void attack(const std::string &target);
    void guardGate();
};

#endif
