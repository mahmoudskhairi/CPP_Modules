#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    if (PRINTINGMODE)
        std::cout << "Cure Default constructor called!" << std::endl;
}
Cure::Cure(const Cure &cure) : AMateria(cure.getType())
{
    if (PRINTINGMODE)
        std::cout << "Cure Copy constructor called!" << std::endl;
}
Cure &Cure::operator=(const Cure &cure)
{
    if (PRINTINGMODE)
        std::cout << "Cure Copy Assignment operator called!" << std::endl;
    (void)cure;
    return (*this);
}
Cure *Cure::clone() const
{
    return (new Cure());
}
void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}
Cure::~Cure()
{
    if (PRINTINGMODE)
        std::cout << "Cure Destructor called!" << std::endl;
}