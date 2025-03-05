#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    if (PRINTINGMODE)
        std::cout << "AmateriaSource Default constructor called!" << std::endl;
    for (size_t i = 0; i < 4; i++)
        this->_Inventory[i] = NULL;
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
        std::cout << "AmateriaSource  destructor called!" << std::endl;
}
void MateriaSource::learnMateria(AMateria *obj)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (!this->_Inventory[i])
        {
            this->_Inventory[i] = obj;
            return;
        }
    }
    std::cout << "no space left in the MateriaSource to store your Materia" << std::endl;
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
    if (type.compare("ice") || type.compare("cure"))
    {
        std::cout << "Creation Of Materias Is Impossible!" << std::endl;
        return NULL;
    }
    bool flag = 0;
    if (!type.compare("ice"))
        flag = 1;
    if (flag)
    {
        return (new Ice("ice"));
    }
    return (new Cure("cure"));
}