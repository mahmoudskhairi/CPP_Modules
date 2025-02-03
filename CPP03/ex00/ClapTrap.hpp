#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string _Name;
    unsigned int _Health;
    unsigned int _Energie;
    unsigned int _DamagePoints;

public:
    ClapTrap();
    ClapTrap(std::string Name);
    ClapTrap(ClapTrap target);
    ~ClapTrap();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif