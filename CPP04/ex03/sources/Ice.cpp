#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    if (PRINTINGMODE)
        std::cout << "Ice Default constructor called!" << std::endl;
}
Ice::Ice(std::string type) : AMateria(type)
{
    if (PRINTINGMODE)
        std::cout << "Ice parameterized constructor called!" << std::endl;
}
Ice::Ice(const Ice &ice) : AMateria(ice.getType())
{
    if (PRINTINGMODE)
        std::cout << "Ice Copy constructor called!" << std::endl;
}
Ice &Ice::operator=(const Ice &ice)
{
    if (PRINTINGMODE)
        std::cout << "Ice Copy Assignment operator called!" << std::endl;
    return (*this);
}
Ice *Ice::clone() const
{
    return (new Ice("ice"));
}
void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
Ice::~Ice()
{
    if (PRINTINGMODE)
        std::cout << "Ice Destructor called!" << std::endl;
}