#include "../includes/AMateria.hpp"

AMateria::AMateria(void) : _type("unkown_type")
{
    if (PRINTINGMODE)
        std::cout << "Materia Default constructor called!" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    if (PRINTINGMODE)
        std::cout << "Materia parameterized constructor called!" << std::endl;
}

AMateria::AMateria(const AMateria &Obj)
{
    if (PRINTINGMODE)
        std::cout << "Materia Copy constructor called!" << std::endl;
    (void)Obj;
}

AMateria &AMateria::operator=(const AMateria &Obj)
{
    if (PRINTINGMODE)
        std::cout << "Materia Copy Assignment operator called!" << std::endl;
    (void)Obj;
    return (*this);
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
    std::cout << "* uses some unknown materia on the character named " << target.getName() << "*" << std::endl;
}

AMateria::~AMateria(void)
{
    if (PRINTINGMODE)
        std::cout << "Materia Destructor called!" << std::endl;
}