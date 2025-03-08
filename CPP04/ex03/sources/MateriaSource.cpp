#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    if (PRINTINGMODE)
        std::cout << "AmateriaSource Default constructor called!" << std::endl;
    for (size_t i = 0; i < 4; i++)
        this->_Inventorys[i] = NULL;
}
MateriaSource::MateriaSource(MateriaSource const &obj)
{
    if (PRINTINGMODE)
        std::cout << "AmateriaSource copy constructor called!" << std::endl;
    // copy the content of obj inventory !
    for (size_t i = 0; i < 4; i++)
        this->_Inventorys[i] = obj._Inventorys[i];
}
MateriaSource &MateriaSource::operator=(MateriaSource const &obj)
{
    if (PRINTINGMODE)
        std::cout << "AmateriaSource copy assignment operator called!" << std::endl;
    // Assign the content of obj inventory !
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_Inventorys[i])
            delete (this->_Inventorys[i]);
        this->_Inventorys[i] = obj._Inventorys[i];
    }
    return (*this);
}
MateriaSource::~MateriaSource()
{
        std::cout << "AmateriaSource  destructor called!" << std::endl;
    // if (PRINTINGMODE)
    for (size_t i = 0; i < 4; i++)
    {
        // std::cout << "deleting of " << i<< std::endl;
        // std::cout << "i: " << i<< " address before: "<<this->_Inventorys[i] << std::endl;
        delete this->_Inventorys[i];
        this->_Inventorys[i] = NULL;
        // std::cout << "i: " << i<< " address after: "<<this->_Inventorys[i] << std::endl;
    }
}
void MateriaSource::learnMateria(AMateria *obj)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (!this->_Inventorys[i])
        {
            this->_Inventorys[i] = obj;
            return;
        }
    }
    std::cerr << "no space left in the MateriaSource to store your Materia!" << std::endl;
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (size_t i = 0; i < 4; i++)
    {
        //just for debugging
        // if (this->_Inventorys[i])
        // {
        //     // std::cout << i << ": " << this->_Inventorys[i]->getType() << std::endl;
        //     // std::cout << i  << type << std::endl;
        //     // std::cout << "return:"  << (this->_Inventorys[i]->getType()).compare(type) << std::endl;
        // }
        if (this->_Inventorys[i] && !(this->_Inventorys[i]->getType()).compare(type))
                return (this->_Inventorys[i]->clone());
    }
    std::cerr << "Creation Of Materias Is Impossible!" << std::endl;
    return (NULL);
}