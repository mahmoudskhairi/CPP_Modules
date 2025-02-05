#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string _Name;
    unsigned int _Health;
    unsigned int _Energie;
    unsigned int _DamagePoints;

public:
    ClapTrap();
    ClapTrap(std::string Name);
    ClapTrap(ClapTrap &target);
    ~ClapTrap();
    ClapTrap &operator=(ClapTrap &clap);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    /* getters and setters */
    void SetName(std::string Name);
    std::string GetName();
    void SetHealth(unsigned int Health);
    unsigned int GetHealth();
    void SetEnergie(unsigned int Energie);
    unsigned int GetEnergie();
    void SetDamage(unsigned int Damage);
    unsigned int GetDamage();
};

#endif