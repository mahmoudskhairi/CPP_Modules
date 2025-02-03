#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Health(10), _DamagePoints(0), _Energie(10)
{
    std::cout << this->_Name << "is here" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name)
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap target)
{
    *this = target;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_Energie || this->_Health)
    {
        this->_Energie--;
        std::cout << "ClapTrap " << this->_Name << "attacks " << target << ", causing " << this->_DamagePoints << "points of damage!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_Name << "can't attacks anyone!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_Health)
    {
        this->_DamagePoints += amount;
        this->_Health -= amount;
        std::cout << this->_Name << " takes " << amount << " ponits of damage!" << std::endl;
    }
    std::cout << this->_Name << "has been died!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_Energie || this->_Health)
    {
        this->_Energie--;
        this->_Health += amount;
        std::cout << this->_Name << " repairs itself, recovering" << amount << "hit point!" << std::endl;
    }
    std::cout << this->_Name << "can't repairs itself!" << std::endl;
}