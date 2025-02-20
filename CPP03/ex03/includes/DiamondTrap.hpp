#ifndef _DIAMONDTRAP_HPP_
#define _DIAMONDTRAP_HPP_

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _Name;

public:
    DiamondTrap();
    DiamondTrap(std::string Name);
    DiamondTrap(DiamondTrap &Diamond);
    void attack(const std::string &target);
    DiamondTrap &operator=(DiamondTrap &Assigned);
    void whoAmI();
    ~DiamondTrap();
};
#endif