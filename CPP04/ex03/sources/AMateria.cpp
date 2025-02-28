#include "../includes/AMateria.hpp"

AMateria::AMateria(void)
{
    std::cout << "Default constructor called!" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "Copy constructor called!" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::setType(std::string type)
{
    this->_type = type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "* uses some unknown materia on " << target.getName() << "*" << std::endl;
}

AMateria::~AMateria(void)
{
    std::cout << "Destructor called!" << std::endl;
}