#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    if (PRINTINGMODE)
        std::cout << "AmateriaSource Default constructor called!" << std::endl;
}
MateriaSource::MateriaSource(MateriaSource const &obj)
{
    if (PRINTINGMODE)
        std::cout << "AmateriaSource copy constructor called!" << std::endl;
    // copy the content of inventory !
}
MateriaSource &MateriaSource::operator=(MateriaSource const &obj)
{
    if (PRINTINGMODE)
        std::cout << "AmateriaSource copy assignment operator called!" << std::endl;
    // copy the content of inventory !
    return (*this);
}
MateriaSource::~MateriaSource()
{
    if (PRINTINGMODE)
        std::cout << "AmateriaSource  Destructor called!" << std::endl;
}
void MateriaSource::learnMateria(AMateria *)
{
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
    bool flag = 0;
    if (type.compare("ice"))
        flag = 1;
    if (flag)
    {
        return (new (Ice()))
    }
    return (new)
}