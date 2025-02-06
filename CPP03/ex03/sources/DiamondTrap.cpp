#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
}
DiamondTrap::DiamondTrap(std::string Name) : ScavTrap(Name), FragTrap(Name)
{
    this->_Health = FragTrap::GetHealth();
    this->_Energie = ScavTrap::GetEnergie();
    this->_DamagePoints = FragTrap::GetDamage();
}
DiamondTrap &DiamondTrap::operator=(DiamondTrap &Assigned)
{
    if (this != &Assigned)
    {
        ClapTrap::SetName(Assigned.GetName());
        this->SetName(Assigned.GetName());
        this->SetHealth(Assigned.GetHealth());
        this->SetEnergie(Assigned.GetEnergie());
        this->SetDamage(Assigned.GetDamage());
    }
    return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
    if (this->_Energie && this->_Health)
    {
        this->_Energie--;
        std::cout << "<Diamond> : " << this->_Name << " attacks " << target << " , causing " << this->_DamagePoints << " points of damage!" << std::endl;
        return;
    }
    std::cout << "<Frag> : " << this->_Name << " can't attacks anyone!" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap &Diamond) : ScavTrap(Diamond), FragTrap(Diamond)
{
    this->_Name = Diamond.GetName();
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "#Diamond# :" << this->GetName() << "destructor called" << std::endl;
}