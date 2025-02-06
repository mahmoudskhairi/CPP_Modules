#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}
ClapTrap::ClapTrap(std::string Name) : _Name(Name), _Health(10), _Energie(10), _DamagePoints(0)
{
    std::cout << "(Claptrap) : " << this->_Name << " is here" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &target)
{

    std::cout << "Copy constructor called" << std::endl;
    *this = target;
}

ClapTrap::~ClapTrap()
{
    std::cout << "(Claptrap) : " << this->_Name << " destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &clap)
{
    if (this != &clap)
    {
        this->_Name = clap._Name;
        this->_Health = clap._Health;
        this->_Energie = clap._Energie;
        this->_DamagePoints = clap._DamagePoints;
    }
    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_Energie && this->_Health)
    {
        this->_Energie--;
        std::cout << "(ClapTrap) : " << this->_Name << " attacks @" << target << " , causing " << this->_DamagePoints << " points of damage!" << std::endl;
        return;
    }
    std::cout << "(ClapTrap) : " << this->_Name << " can't attacks anyone!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_Health > amount)
    {
        this->_Health -= amount;
        std::cout << "(Claptrap) : " << this->_Name << " takes " << amount << " points of damage!" << std::endl;
        return;
    }
    this->_Health = 0;
    std::cout << "(Claptrap) : " << this->_Name << " has been died!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_Energie && this->_Health)
    {
        this->_Energie--;
        this->_Health += amount;
        std::cout << "(Claptrap) : " << this->_Name << " repairs itself, recovering " << amount << " hit points!" << std::endl;
        return;
    }
    std::cout << "(Claptrap) : " << this->_Name << " hasn't energy left to repairs itself!" << std::endl;
}

/* getters and setters */
void ClapTrap::SetName(std::string Name)
{
    this->_Name = Name;
}
std::string ClapTrap::GetName()
{
    return (this->_Name);
}

void ClapTrap::SetHealth(unsigned int Health)
{
    this->_Health = Health;
}
unsigned int ClapTrap::GetHealth()
{
    return (this->_Health);
}
void ClapTrap::SetEnergie(unsigned int Energie)
{
    this->_Energie = Energie;
}
unsigned int ClapTrap::GetEnergie()
{
    return (this->_Energie);
}
void ClapTrap::SetDamage(unsigned int Damage)
{
    this->_DamagePoints = Damage;
}
unsigned int ClapTrap::GetDamage()
{
    return (this->_DamagePoints);
}