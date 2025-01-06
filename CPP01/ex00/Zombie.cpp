#include "Zombie.hpp"

Zombie::Zombie(std::string Name)
{
    _Name = Name;
}

void Zombie::announce(void)
{
    std::cout << this->_Name
              << " : BraiiiiiiinnnzzzZ..."
              << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->_Name
              << ", must be destroyed"
              << std::endl;
}