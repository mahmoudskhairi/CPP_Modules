#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("")
{
    std::cout << "Cure: default constructor called" << std::endl;
}
Cure::Cure(Cure &Copied) : AMateria(Copied)
{
    std::cout << "Cure: Copy constructor called" << std::endl;
    *this = Copied;
}

Cure &Cure::operator=(Cure &Assigned)
{
    std::cout << "Cure: assignment constructor called" << std::endl;
    if (this != &Assigned)
    {
        this->_type = Assigned._type;
    }
}
void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
Cure::~Cure()
{
    std::cout << "Cure: Destructor called" << std::endl;
}