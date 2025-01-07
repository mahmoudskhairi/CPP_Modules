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
    /*std::string &typeREF = this->_type;
      return (typeREF); */
    // "this" is a pointer to the object , and a reference to their members in the same time
    return (this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}
