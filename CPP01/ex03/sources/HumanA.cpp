#include "../includes/HumanA.hpp"

// HumanA::HumanA()
// {
//     std::cout << "@ HumanA constructors !!" << std::endl;
// }
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout << "HumanA parameterize constructors !!" << std::endl;
}
HumanA::~HumanA()
{
    std::cout << "HumanA destructors !!" << std::endl;
}
void HumanA::attack()
{
    std::cout << this->_name << " attacks with their "
              << this->_weapon.getType() << std::endl;
}