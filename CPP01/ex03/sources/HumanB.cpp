#include "../includes/HumanB.hpp"

// HumanB::HumanB()
// {
//     std::cout << "HumanB constructors !!" << std::endl;
// }
HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
    std::cout << "HumanB parameterize constructors !!" << std::endl;
}
HumanB::~HumanB()
{
    std::cout << "HumanB destructors !!" << std::endl;
}
void HumanB::attack()
{
    std::cout << this->_name << " attacks with their "
              << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}