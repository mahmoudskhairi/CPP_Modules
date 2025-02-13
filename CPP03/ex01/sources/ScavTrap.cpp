#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "<Scav> : " << this->GetName() << " is here" << std::endl;
    this->SetHealth(100);
    this->SetEnergie(50);
    this->SetDamage(20);
}

void ScavTrap::guardGate()
{
    if (!this->GetEnergie() || !this->GetHealth())
    {
        std::cout << "<Scav> : " << this->_Name << " is already died" << std::endl;
        return;
    }
    std::cout << "<Scav> : " << this->_Name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->_Energie && this->_Health)
    {
        this->_Energie--;
        std::cout << "<Scav> : " << this->_Name << " attacks " << target << " , causing " << this->_DamagePoints << " points of damage!" << std::endl;
        return;
    }
    std::cout << "<Scav> : " << this->_Name << " can't attacks anyone!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "<Scav> : " << this->GetName() << " Destructor called" << std::endl;
}