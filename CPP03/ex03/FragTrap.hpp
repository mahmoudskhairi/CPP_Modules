#ifndef _FRAGTRAP_HPP_
#define _FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string Name);
    FragTrap(FragTrap &New);
    // FragTrap &operator=(FragTrap &New);
    ~FragTrap();
    void attack(const std::string &target);
    void highFivesGuys(void);
};
#endif