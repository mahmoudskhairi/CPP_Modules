#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie has been created" << std::endl;
}

// Zombie::Zombie(std::string name)
// {
//     _ZombieName = name;
//     std::cout << "parametized constructor has been called" << std::endl;
// }

void Zombie::SetName(std::string Name)
{
    this->_ZombieName = Name;
}
Zombie::~Zombie(void)
{
    std::cout << this->_ZombieName << " has been destroyed" << std::endl;
}

void Zombie::Announce(void)
{
    std::cout << this->_ZombieName << " : BraiiiiiiinnnzzzZ."
              << std::endl;
}