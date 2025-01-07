#include "../includes/Weapon.hpp"

// Weapon::Weapon()
// {
//     std::cout << "Weapon constructuor" << std::endl;
// }
Weapon::~Weapon()
{
    std::cout << "Weapon destructuor" << std::endl;
}

Weapon::Weapon(std::string type) : _type(type)
{
    std::cout << "Weapon paramiterize constructuor" << std::endl;
}

const std::string &Weapon::getType()
{
    // std::string &typeREF = this->_type;
    // return (typeREF);
    return (this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}
