#ifndef _SCAVTRAP_HPP_
#define _SCAVTRAP_HPP_
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap(std::string Name);
    ~ScavTrap();
    void attack(const std::string &target);
    void guardGate();
};

#endif
