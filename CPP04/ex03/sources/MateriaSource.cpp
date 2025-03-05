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
    // copy the content of obj inventory !
    for (size_t i = 0; i < 4; i++)
        this->_Inventory[i] = obj._Inventory[i];
}
MateriaSource &MateriaSource::operator=(MateriaSource const &obj)
{
    if (PRINTINGMODE)
        std::cout << "AmateriaSource copy assignment operator called!" << std::endl;
    // Assign the content of obj inventory !
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_Inventory[i])
            delete (this->_Inventory[i]);
        this->_Inventory[i] = obj._Inventory[i];
    }
    return (*this);
}
MateriaSource::~MateriaSource()
{
    if (PRINTINGMODE)
        std::cout << "AmateriaSource  destructor called!" << std::endl;
    for (size_t i = 0; i < 4; i++)
        delete (this->_Inventory[i]);
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
    std::cerr << "no space left in the MateriaSource to store your Materia" << std::endl;
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (size_t i = 0; i < 3; i++)
    {
        if (this->_Inventory[i] && !(this->_Inventory[i]->getType()).compare(type))
            return (this->_Inventory[i]->clone());
    }
    std::cerr << "Creation Of Materias Is Impossible!" << std::endl;
    return (NULL);
}