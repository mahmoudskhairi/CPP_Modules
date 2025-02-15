#include "../includes/AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type)
{
    std::cout << "Copy constructor called!" << std::endl;
}
// [...]
std::string const &AMateria::getType() const
{
    return this->_type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "Ice: * shoots an ice bolt at" << target.getName() << " *" << std::endl;
}