#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
}
DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name"), ScavTrap(Name + "_clap_name"), FragTrap(Name + "_clap_name"), _Name(Name)
{
    // this->_Name = Name;
    this->_Health = 100;
    this->_Energie = 50;
    this->_DamagePoints = 60;
}

/* necessary usage is this case ,because FragTrap have its own data members*/

DiamondTrap &DiamondTrap::operator=(DiamondTrap &Assigned)
{
    if (this != &Assigned)
    {
        this->ClapTrap::SetName(Assigned.GetName() + "_clap_name");
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
        std::cout << "#Diamond# : " << this->_Name << " attacks " << target << " , causing " << this->_DamagePoints << " points of damage!" << std::endl;
        return;
    }
    std::cout << "#Dimond# : " << this->_Name << " can't attacks anyone!" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap &Diamond) : ClapTrap(Diamond.ClapTrap::GetName()), ScavTrap(Diamond.GetName()), FragTrap(Diamond.GetName()), _Name(Diamond.GetName())
{
    std::cout << "#Diamond# : " << this->_Name << " Copy constructor called" << std::endl;
}
void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap Name is : " << this->_Name << std::endl;
    std::cout << "ClapTrap Name is : " << ClapTrap::GetName() << std::endl;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "#Diamond# :" << this->GetName() << "destructor called" << std::endl;
}