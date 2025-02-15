#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("")
{
    std::cout << "Ice: default constructor called" << std::endl;
}

Ice::Ice(Ice &Copied) : AMateria(Copied)
{
    std::cout << "Ice: Copy constructor called" << std::endl;
    *this = Copied;
}

Ice &Ice::operator=(Ice &Assigned)
{
    std::cout << "Ice: Copy assignment called" << std::endl;
    if (this != &Assigned)
    {
        this->_type = Assigned._type;
    }
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
// AMateria *Ice::clone() const
// {
//     std::cout << "* shoots an ice bolt at <name> *" << std::endl;
// }

Ice::~Ice()
{
    std::cout << "Ice: Destructor called" << std::endl;
}