#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "<Frag> : " << this->GetName() << " is here!" << std::endl;
    this->_Health = 100;
    this->_Energie = 100;
    this->_DamagePoints = 60;
}
/* unnecessary usage*/
// FragTrap &FragTrap::operator=(FragTrap &New)
// {
//     if (this != &New)
//     {
//         this->SetName(New.GetName());
//         this->SetHealth(New.GetHealth());
//         this->SetEnergie(New.GetEnergie());
//         this->SetDamage(New.GetDamage());
//     }
//     return (*this);
// }

FragTrap::FragTrap(FragTrap &New) : ClapTrap(New)
{
    /* unnecessary usage of // *this = New;// double initialization of ClapTrap data members */
}

void FragTrap::highFivesGuys(void)
{
    if (this->GetEnergie() > 0 && this->GetHealth() > 0)
    {
        std::cout << "<Frag> : " << this->GetName() << " high fives to all friends" << std::endl;
        return;
    }
    std::cout << "<Frag> : " << this->GetName() << " doesn't has power to high fives" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (this->_Energie && this->_Health)
    {
        this->_Energie--;
        std::cout << "<Frag> : " << this->_Name << " attacks " << target << " , causing " << this->_DamagePoints << " points of damage!" << std::endl;
        return;
    }
    std::cout << "<Frag> : " << this->_Name << " can't attacks anyone!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "<Frag> : " << this->GetName() << "destructor called" << std::endl;
}