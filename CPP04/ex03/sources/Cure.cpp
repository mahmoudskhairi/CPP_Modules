#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("Cure")
{
    if (PRINTINGMODE)
        std::cout << "Cure Default constructor called!" << std::endl;
}
Cure::Cure(std::string type) : AMateria(type) // what about type value is different on cure
{
    if (PRINTINGMODE)
        std::cout << "Cure parameterized constructor called!" << std::endl;
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
    return (*this);
}
Cure *Cure::clone() const
{
    return (new Cure("cure"));
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