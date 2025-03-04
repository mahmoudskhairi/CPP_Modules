#ifndef _IMATERIASOURCE_HPP_
#define _IMATERIASOURCE_HPP_
#include "AMateria.hpp"

class IMateriaSource
{
private:
    AMateria *_Inventory[4];

public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *) = 0;
    virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif